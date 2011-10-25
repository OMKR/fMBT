/*
  Generated by Make DParser Version 1.26.4572c8430039eb8e7d05ab65767485dd85319211
  Available at http://dparser.sf.net
*/

#line 1 ".//mrules.g"

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
#include <stdlib.h>
#include <string>
typedef struct _node {
  int val;
  std::string* str;
} node;
#define D_ParseNode_User node
#include "adapter_mapper.hh"
Rules* amobj;

#line 37 "mrules.g.d_parser.cc"
#include "dparse.h"

D_Reduction d_reduction_0_mrules = {1, 0, NULL, NULL, 0, 0, 0, 0, -1, 0, NULL};
D_Reduction d_reduction_1_mrules = {2, 1, NULL, NULL, 0, 0, 0, 0, 0, 0, NULL};
D_Reduction d_reduction_2_mrules = {2, 2, NULL, NULL, 0, 0, 0, 0, -1, 0, NULL};
D_Reduction d_reduction_3_mrules = {1, 2, NULL, NULL, 0, 0, 0, 0, -1, 0, NULL};
D_Reduction d_reduction_4_mrules = {2, 3, NULL, NULL, 0, 0, 0, 0, -1, 0, NULL};
D_Reduction d_reduction_5_mrules = {1, 3, NULL, NULL, 0, 0, 0, 0, -1, 0, NULL};
#line 33 ".//mrules.g"
int d_final_reduction_code_4_6_mrules(void *_ps, void **_children, int _n_children, int _offset, D_Parser *_parser) {  amobj->add_file((D_PN(_children[0], _offset)->user).val,*(D_PN(_children[2], _offset)->user).str); delete (D_PN(_children[2], _offset)->user).str; (D_PN(_children[2], _offset)->user).str=NULL;   return 0;}

#line 49 "mrules.g.d_parser.cc"
D_Reduction d_reduction_6_mrules = {3, 4, NULL, d_final_reduction_code_4_6_mrules, 0, 0, 0, 0, 0, 0, NULL};
#line 35 ".//mrules.g"
int d_final_reduction_code_5_7_mrules(void *_ps, void **_children, int _n_children, int _offset, D_Parser *_parser) {  amobj->add_result_action((D_PN(_children[0], _offset)->user).str);   return 0;}

#line 54 "mrules.g.d_parser.cc"
D_Reduction d_reduction_7_mrules = {3, 5, NULL, d_final_reduction_code_5_7_mrules, 0, 0, 0, 0, 0, 0, NULL};
#line 37 ".//mrules.g"
int d_final_reduction_code_6_8_mrules(void *_ps, void **_children, int _n_children, int _offset, D_Parser *_parser) {  amobj->add_component((D_PN(_children[1], _offset)->user).val,*(D_PN(_children[3], _offset)->user).str); delete (D_PN(_children[3], _offset)->user).str; (D_PN(_children[3], _offset)->user).str=NULL;   return 0;}

#line 59 "mrules.g.d_parser.cc"
D_Reduction d_reduction_8_mrules = {5, 6, NULL, d_final_reduction_code_6_8_mrules, 0, 0, 0, 0, 0, 0, NULL};
#line 39 ".//mrules.g"
int d_final_reduction_code_7_9_mrules(void *_ps, void **_children, int _n_children, int _offset, D_Parser *_parser) {  (D_PN(_ps, _offset)->user).str = new std::string((*(D_PN(_children[0], _offset))).start_loc.s+1,(*(D_PN(_children[0], _offset))).end-(*(D_PN(_children[0], _offset))).start_loc.s-2);   return 0;}

#line 64 "mrules.g.d_parser.cc"
D_Reduction d_reduction_9_mrules = {1, 7, NULL, d_final_reduction_code_7_9_mrules, 0, 0, 0, 0, 0, 0, NULL};
#line 41 ".//mrules.g"
int d_final_reduction_code_8_10_mrules(void *_ps, void **_children, int _n_children, int _offset, D_Parser *_parser) {  (D_PN(_ps, _offset)->user).val = atoi((*(D_PN(_children[0], _offset))).start_loc.s);   return 0;}

#line 69 "mrules.g.d_parser.cc"
D_Reduction d_reduction_10_mrules = {1, 8, NULL, d_final_reduction_code_8_10_mrules, 0, 0, 0, 0, 0, 0, NULL};
D_Reduction d_reduction_11_mrules = {1, 9, NULL, NULL, 0, 0, 0, 0, 0, 0, NULL};
D_Shift d_shift_0_mrules = {10, 0, 0, 0, 0, 0, NULL};
D_Shift d_shift_1_mrules = {11, 0, 0, 0, 0, 0, NULL};
D_Shift d_shift_2_mrules = {12, 0, 0, 0, 0, 0, NULL};
D_Shift d_shift_3_mrules = {13, 0, 0, 0, 0, 0, NULL};
D_Shift d_shift_4_mrules = {14, 0, 0, 0, 0, 0, NULL};
D_Shift d_shift_5_mrules = {15, 0, 0, 0, 0, 0, NULL};
D_Shift d_shift_6_mrules = {16, 0, 0, 0, 0, 0, NULL};

D_Shift * d_accepts_diff_0_0_mrules[] = {0};
D_Shift ** d_accepts_diff_0_mrules[] = {
d_accepts_diff_0_0_mrules
};

unsigned char d_scanner_0_0_0_mrules[SCANNER_BLOCK_SIZE] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 
};

unsigned char d_accepts_diff_0_0_0_mrules[SCANNER_BLOCK_SIZE] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

unsigned char d_scanner_0_0_1_mrules[SCANNER_BLOCK_SIZE] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

D_Shift * d_shift_0_1_mrules[] = {&d_shift_6_mrules,NULL};

D_Shift * d_accepts_diff_3_0_mrules[] = {0};
D_Shift ** d_accepts_diff_3_mrules[] = {
d_accepts_diff_3_0_mrules
};

unsigned char d_scanner_3_0_0_mrules[SCANNER_BLOCK_SIZE] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 
};

unsigned char d_scanner_3_1_0_mrules[SCANNER_BLOCK_SIZE] = {
0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
};

unsigned char d_scanner_3_1_1_mrules[SCANNER_BLOCK_SIZE] = {
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 6, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
};

unsigned char d_scanner_3_1_2_mrules[SCANNER_BLOCK_SIZE] = {
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
};

unsigned char d_scanner_3_2_0_mrules[SCANNER_BLOCK_SIZE] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 
};

D_Shift * d_shift_3_4_mrules[] = {&d_shift_5_mrules,NULL};

unsigned char d_scanner_3_5_0_mrules[SCANNER_BLOCK_SIZE] = {
0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
};

unsigned char d_scanner_3_5_1_mrules[SCANNER_BLOCK_SIZE] = {
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
};

D_Shift * d_accepts_diff_5_0_mrules[] = {0};
D_Shift ** d_accepts_diff_5_mrules[] = {
d_accepts_diff_5_0_mrules
};

unsigned char d_scanner_5_0_0_mrules[SCANNER_BLOCK_SIZE] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 
};

D_Shift * d_shift_5_1_mrules[] = {&d_shift_0_mrules,NULL};

D_Shift * d_accepts_diff_8_0_mrules[] = {0};
D_Shift ** d_accepts_diff_8_mrules[] = {
d_accepts_diff_8_0_mrules
};

unsigned char d_scanner_8_0_0_mrules[SCANNER_BLOCK_SIZE] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

unsigned char d_scanner_8_1_0_mrules[SCANNER_BLOCK_SIZE] = {
0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
};

unsigned char d_scanner_8_1_1_mrules[SCANNER_BLOCK_SIZE] = {
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
};

unsigned char d_scanner_8_1_2_mrules[SCANNER_BLOCK_SIZE] = {
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
};

unsigned char d_scanner_8_4_0_mrules[SCANNER_BLOCK_SIZE] = {
0, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
};

unsigned char d_scanner_8_4_1_mrules[SCANNER_BLOCK_SIZE] = {
6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 
};

D_Shift * d_accepts_diff_11_0_mrules[] = {0};
D_Shift ** d_accepts_diff_11_mrules[] = {
d_accepts_diff_11_0_mrules
};

unsigned char d_scanner_11_0_0_mrules[SCANNER_BLOCK_SIZE] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

unsigned char d_scanner_11_1_0_mrules[SCANNER_BLOCK_SIZE] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 
};

D_Shift * d_shift_11_2_mrules[] = {&d_shift_1_mrules,NULL};

D_Shift * d_accepts_diff_14_0_mrules[] = {0};
D_Shift ** d_accepts_diff_14_mrules[] = {
d_accepts_diff_14_0_mrules
};

unsigned char d_scanner_14_0_0_mrules[SCANNER_BLOCK_SIZE] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

D_Shift * d_shift_14_1_mrules[] = {&d_shift_2_mrules,NULL};

D_Shift * d_accepts_diff_18_0_mrules[] = {0};
D_Shift ** d_accepts_diff_18_mrules[] = {
d_accepts_diff_18_0_mrules
};

unsigned char d_scanner_18_0_0_mrules[SCANNER_BLOCK_SIZE] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

D_Shift * d_shift_18_1_mrules[] = {&d_shift_3_mrules,NULL};

D_Shift * d_accepts_diff_20_0_mrules[] = {0};
D_Shift ** d_accepts_diff_20_mrules[] = {
d_accepts_diff_20_0_mrules
};

unsigned char d_scanner_20_0_0_mrules[SCANNER_BLOCK_SIZE] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

D_Shift * d_shift_20_1_mrules[] = {&d_shift_4_mrules,NULL};

SB_uint8 d_scanner_0_mrules[2] = {
{NULL, {d_scanner_0_0_0_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}},
{d_shift_0_1_mrules, {d_scanner_0_0_0_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}}
};

SB_trans_uint8 d_transition_0_mrules[2] = {
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}}
};

SB_uint8 d_scanner_3_mrules[7] = {
{NULL, {d_scanner_3_0_0_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}},
{NULL, {d_scanner_3_1_0_mrules, d_scanner_3_1_1_mrules
 , d_scanner_3_1_2_mrules, d_scanner_3_1_2_mrules}},
{d_shift_0_1_mrules, {d_scanner_3_2_0_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}},
{NULL, {d_scanner_3_1_0_mrules, d_scanner_3_1_1_mrules
 , d_scanner_3_1_2_mrules, d_scanner_3_1_2_mrules}},
{d_shift_3_4_mrules, {d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}},
{NULL, {d_scanner_3_5_0_mrules, d_scanner_3_5_1_mrules
 , d_scanner_3_5_1_mrules, d_scanner_3_5_1_mrules}},
{NULL, {d_scanner_3_1_0_mrules, d_scanner_3_1_1_mrules
 , d_scanner_3_1_2_mrules, d_scanner_3_1_2_mrules}}
};

SB_trans_uint8 d_transition_3_mrules[7] = {
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}}
};

SB_uint8 d_scanner_5_mrules[2] = {
{NULL, {d_scanner_5_0_0_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}},
{d_shift_5_1_mrules, {d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}}
};

SB_trans_uint8 d_transition_5_mrules[2] = {
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}}
};

SB_uint8 d_scanner_8_mrules[6] = {
{NULL, {d_scanner_8_0_0_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}},
{NULL, {d_scanner_8_1_0_mrules, d_scanner_8_1_1_mrules
 , d_scanner_8_1_2_mrules, d_scanner_8_1_2_mrules}},
{NULL, {d_scanner_8_1_0_mrules, d_scanner_8_1_1_mrules
 , d_scanner_8_1_2_mrules, d_scanner_8_1_2_mrules}},
{d_shift_3_4_mrules, {d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}},
{NULL, {d_scanner_8_4_0_mrules, d_scanner_8_4_1_mrules
 , d_scanner_8_4_1_mrules, d_scanner_8_4_1_mrules}},
{NULL, {d_scanner_8_1_0_mrules, d_scanner_8_1_1_mrules
 , d_scanner_8_1_2_mrules, d_scanner_8_1_2_mrules}}
};

SB_trans_uint8 d_transition_8_mrules[6] = {
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}}
};

SB_uint8 d_scanner_11_mrules[3] = {
{NULL, {d_scanner_11_0_0_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}},
{NULL, {d_scanner_11_1_0_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}},
{d_shift_11_2_mrules, {d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}}
};

SB_trans_uint8 d_transition_11_mrules[3] = {
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}}
};

SB_uint8 d_scanner_14_mrules[2] = {
{NULL, {d_scanner_14_0_0_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}},
{d_shift_14_1_mrules, {d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}}
};

SB_trans_uint8 d_transition_14_mrules[2] = {
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}}
};

SB_uint8 d_scanner_18_mrules[2] = {
{NULL, {d_scanner_18_0_0_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}},
{d_shift_18_1_mrules, {d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}}
};

SB_trans_uint8 d_transition_18_mrules[2] = {
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}}
};

SB_uint8 d_scanner_20_mrules[2] = {
{NULL, {d_scanner_20_0_0_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}},
{d_shift_20_1_mrules, {d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules
 , d_scanner_0_0_1_mrules, d_scanner_0_0_1_mrules}}
};

SB_trans_uint8 d_transition_20_mrules[2] = {
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}},
{{d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules
 , d_accepts_diff_0_0_0_mrules, d_accepts_diff_0_0_0_mrules}}
};

unsigned char d_goto_valid_0_mrules[] = {
0x1a,0x3,0x1};
D_Reduction * d_reductions_1_mrules[] = {&d_reduction_11_mrules};
unsigned char d_goto_valid_3_mrules[] = {
0xb4,0x83,0x1};
D_Reduction * d_reductions_4_mrules[] = {&d_reduction_5_mrules};
unsigned char d_goto_valid_5_mrules[] = {
0x0,0x4,0x0};
D_Reduction * d_reductions_6_mrules[] = {&d_reduction_10_mrules};
D_Reduction * d_reductions_7_mrules[] = {&d_reduction_9_mrules};
unsigned char d_goto_valid_8_mrules[] = {
0xa0,0x80,0x0};
D_Reduction * d_reductions_8_mrules[] = {&d_reduction_1_mrules};
D_Reduction * d_reductions_9_mrules[] = {&d_reduction_4_mrules};
D_Reduction * d_reductions_10_mrules[] = {&d_reduction_3_mrules};
unsigned char d_goto_valid_11_mrules[] = {
0x0,0x8,0x0};
unsigned char d_goto_valid_12_mrules[] = {
0x80,0x80,0x0};
D_Reduction * d_reductions_13_mrules[] = {&d_reduction_2_mrules};
unsigned char d_goto_valid_14_mrules[] = {
0x40,0x10,0x0};
D_Reduction * d_reductions_15_mrules[] = {&d_reduction_6_mrules};
unsigned char d_goto_valid_16_mrules[] = {
0x0,0x3,0x1};
D_Reduction * d_reductions_17_mrules[] = {&d_reduction_7_mrules};
unsigned char d_goto_valid_18_mrules[] = {
0x0,0x20,0x0};
unsigned char d_goto_valid_19_mrules[] = {
0x80,0x80,0x0};
unsigned char d_goto_valid_20_mrules[] = {
0x0,0x40,0x0};
D_Reduction * d_reductions_21_mrules[] = {&d_reduction_8_mrules};
unsigned short d_gotos_mrules[38] = {
3,13,4,5,15,20,22,6,7,0,14,9,12,10,11,2,
12,6,7,16,8,0,18,21,8,2,0,8,17,19,7,8,
0,0,0,0,0,2};

D_ErrorRecoveryHint d_error_recovery_hints_14_mrules[] = {{0, 6, ")"}};
D_ErrorRecoveryHint d_error_recovery_hints_16_mrules[] = {{1, 6, ")"}};
D_ErrorRecoveryHint d_error_recovery_hints_18_mrules[] = {{2, 6, ")"}};
D_ErrorRecoveryHint d_error_recovery_hints_19_mrules[] = {{3, 6, ")"}};
D_ErrorRecoveryHint d_error_recovery_hints_20_mrules[] = {{4, 6, ")"}};
D_ErrorRecoveryHint d_error_recovery_hints_21_mrules[] = {{5, 6, ")"}};

D_State d_states_mrules[] = {
{d_goto_valid_0_mrules, 1, {0, NULL}, {0, NULL}, {0, NULL}, 1, NULL, (void*)d_scanner_0_mrules, sizeof(unsigned char) , 0, D_SCAN_ALL, (void*)d_transition_0_mrules, d_accepts_diff_0_mrules, -1},
{NULL, -2147483647, {1, d_reductions_1_mrules}, {0, NULL}, {0, NULL}, 0, NULL, NULL, sizeof(unsigned char) , 0, D_SCAN_ALL, NULL, NULL, -1},
{NULL, -2147483647, {0, NULL}, {0, NULL}, {0, NULL}, 0, NULL, NULL, sizeof(unsigned char) , 1, D_SCAN_ALL, NULL, NULL, -1},
{d_goto_valid_3_mrules, -9, {0, NULL}, {0, NULL}, {0, NULL}, 1, NULL, (void*)d_scanner_3_mrules, sizeof(unsigned char) , 0, D_SCAN_ALL, (void*)d_transition_3_mrules, d_accepts_diff_3_mrules, -1},
{NULL, -2147483647, {1, d_reductions_4_mrules}, {0, NULL}, {0, NULL}, 0, NULL, NULL, sizeof(unsigned char) , 0, D_SCAN_ALL, NULL, NULL, -1},
{d_goto_valid_5_mrules, 9, {0, NULL}, {0, NULL}, {0, NULL}, 1, NULL, (void*)d_scanner_5_mrules, sizeof(unsigned char) , 0, D_SCAN_ALL, (void*)d_transition_5_mrules, d_accepts_diff_5_mrules, -1},
{NULL, -2147483647, {1, d_reductions_6_mrules}, {0, NULL}, {0, NULL}, 0, NULL, NULL, sizeof(unsigned char) , 0, D_SCAN_ALL, NULL, NULL, -1},
{NULL, -2147483647, {1, d_reductions_7_mrules}, {0, NULL}, {0, NULL}, 0, NULL, NULL, sizeof(unsigned char) , 0, D_SCAN_ALL, NULL, NULL, -1},
{d_goto_valid_8_mrules, -5, {1, d_reductions_8_mrules}, {0, NULL}, {0, NULL}, 1, NULL, (void*)d_scanner_8_mrules, sizeof(unsigned char) , 0, D_SCAN_ALL, (void*)d_transition_8_mrules, d_accepts_diff_8_mrules, -1},
{NULL, -2147483647, {1, d_reductions_9_mrules}, {0, NULL}, {0, NULL}, 0, NULL, NULL, sizeof(unsigned char) , 0, D_SCAN_ALL, NULL, NULL, -1},
{NULL, -2147483647, {1, d_reductions_10_mrules}, {0, NULL}, {0, NULL}, 0, NULL, NULL, sizeof(unsigned char) , 0, D_SCAN_ALL, NULL, NULL, -1},
{d_goto_valid_11_mrules, 7, {0, NULL}, {0, NULL}, {0, NULL}, 1, NULL, (void*)d_scanner_11_mrules, sizeof(unsigned char) , 0, D_SCAN_ALL, (void*)d_transition_11_mrules, d_accepts_diff_11_mrules, -1},
{d_goto_valid_12_mrules, -12, {0, NULL}, {0, NULL}, {0, NULL}, 1, NULL, (void*)d_scanner_8_mrules, sizeof(unsigned char) , 0, D_SCAN_ALL, (void*)d_transition_8_mrules, d_accepts_diff_8_mrules, -1},
{NULL, -2147483647, {1, d_reductions_13_mrules}, {0, NULL}, {0, NULL}, 0, NULL, NULL, sizeof(unsigned char) , 0, D_SCAN_ALL, NULL, NULL, -1},
{d_goto_valid_14_mrules, -16, {0, NULL}, {0, NULL}, {1, d_error_recovery_hints_14_mrules}, 1, NULL, (void*)d_scanner_14_mrules, sizeof(unsigned char) , 0, D_SCAN_ALL, (void*)d_transition_14_mrules, d_accepts_diff_14_mrules, -1},
{NULL, -2147483647, {1, d_reductions_15_mrules}, {0, NULL}, {0, NULL}, 0, NULL, NULL, sizeof(unsigned char) , 0, D_SCAN_ALL, NULL, NULL, -1},
{d_goto_valid_16_mrules, -21, {0, NULL}, {0, NULL}, {1, d_error_recovery_hints_16_mrules}, 1, NULL, (void*)d_scanner_0_mrules, sizeof(unsigned char) , 0, D_SCAN_ALL, (void*)d_transition_0_mrules, d_accepts_diff_0_mrules, -1},
{NULL, -2147483647, {1, d_reductions_17_mrules}, {0, NULL}, {0, NULL}, 0, NULL, NULL, sizeof(unsigned char) , 0, D_SCAN_ALL, NULL, NULL, -1},
{d_goto_valid_18_mrules, 8, {0, NULL}, {0, NULL}, {1, d_error_recovery_hints_18_mrules}, 1, NULL, (void*)d_scanner_18_mrules, sizeof(unsigned char) , 0, D_SCAN_ALL, (void*)d_transition_18_mrules, d_accepts_diff_18_mrules, -1},
{d_goto_valid_19_mrules, -16, {0, NULL}, {0, NULL}, {1, d_error_recovery_hints_19_mrules}, 1, NULL, (void*)d_scanner_8_mrules, sizeof(unsigned char) , 0, D_SCAN_ALL, (void*)d_transition_8_mrules, d_accepts_diff_8_mrules, -1},
{d_goto_valid_20_mrules, 8, {0, NULL}, {0, NULL}, {1, d_error_recovery_hints_20_mrules}, 1, NULL, (void*)d_scanner_20_mrules, sizeof(unsigned char) , 0, D_SCAN_ALL, (void*)d_transition_20_mrules, d_accepts_diff_20_mrules, -1},
{NULL, -2147483647, {1, d_reductions_21_mrules}, {0, NULL}, {1, d_error_recovery_hints_21_mrules}, 0, NULL, NULL, sizeof(unsigned char) , 0, D_SCAN_ALL, NULL, NULL, -1}
};

D_Symbol d_symbols_mrules[] = {
{D_SYMBOL_EBNF, "0 Start", 7, -1},
{D_SYMBOL_NTERM, "xrules_e_file", 13, -1},
{D_SYMBOL_INTERNAL, "xrules_e_file__3", 16, -1},
{D_SYMBOL_INTERNAL, "xrules_e_file__2", 16, -1},
{D_SYMBOL_NTERM, "filename", 8, -1},
{D_SYMBOL_NTERM, "rule", 4, -1},
{D_SYMBOL_NTERM, "component", 9, -1},
{D_SYMBOL_NTERM, "string", 6, -1},
{D_SYMBOL_NTERM, "int", 3, -1},
{D_SYMBOL_NTERM, "istr", 4, -1},
{D_SYMBOL_STRING, "=", 1},
{D_SYMBOL_STRING, "->", 2},
{D_SYMBOL_STRING, "(", 1},
{D_SYMBOL_STRING, ",", 1},
{D_SYMBOL_STRING, ")", 1},
{D_SYMBOL_REGEX, "\\\"([^\\\"\\\\\\\\]|\\\\\\\\[^])*\\\"", 38},
{D_SYMBOL_REGEX, "[0-9]+", 6},
};

D_ParserTables parser_tables_mrules = {
22, d_states_mrules, d_gotos_mrules, 0, 17, d_symbols_mrules, NULL, 0, NULL, 0};
