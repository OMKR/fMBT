/*
 * fMBT, free Model Based Testing tool
 * Copyright (c) 2011, Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU Lesser General Public License,
 * version 2.1, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#include "heuristic.hh"

std::map<std::string,Heuristic::creator>* Heuristic::factory = 0;

void Heuristic::add_factory(std::string name,creator c)
{
  if (!factory) factory = new std::map<std::string,Heuristic::creator>;
  (*factory)[name]=c;
}

bool Heuristic::execute(int action)
{  
  if (!model->execute(action)) {
    log.debug("Heuristic::execute: executing action %i in model failed\n", action);
    return false;
  }

  if (my_coverage) {
    my_coverage->execute(action);
  }

  for(size_t i=0;i<coverage.size();i++) {
    coverage[i]->execute(action);
  }
  return true;
}
  
std::vector<std::string>& Heuristic::getAllActions()
{
  return model->getActionNames();
}

float Heuristic::getCoverage() {
  return my_coverage->getCoverage();  
}

Heuristic* Heuristic::create(Log&l,std::string name)
{
  creator c=(*factory)[name];

  if (c) {
    return c(l);
  }

  throw (int)42423;

  return NULL;
}
