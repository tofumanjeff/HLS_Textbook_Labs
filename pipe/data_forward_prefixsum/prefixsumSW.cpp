/**********************************************
* Copyright (C) Copyright © 2021-2022, BOLEDU *
* SPDX-License-Identifier: BSD-3-Clause       *
**********************************************/

#include "prefixsum.h"

void prefixsum(int in[SIZE], int out[SIZE]) {
    out[0] = in[0];
    for(int i=1; i < SIZE; i++) {
#pragma HLS PIPELINE
	    out[i] = out[i-1] + in[i];
    }
}
