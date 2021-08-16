/**********************************************
* Copyright (C) Copyright © 2021-2022, BOLEDU *
* SPDX-License-Identifier: BSD-3-Clause       *
**********************************************/

#ifndef _LOOP_VARIABLE_BOUNDS_
#define _LOOP_VARIABLE_BOUNDS_

#include <iostream>
#include <fstream>
using namespace std;

#include "ap_int.h"
#define N 32

typedef ap_int<8>  din_t;
typedef ap_int<13> dout_t;
typedef ap_uint<5> dsel_t;

dout_t loop_variable_bounds(din_t A[N], dsel_t width);

#endif
