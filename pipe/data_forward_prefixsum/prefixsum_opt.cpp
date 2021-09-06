/**********************************************
* Copyright (C) Copyright © 2021-2022, BOLEDU *
* SPDX-License-Identifier: BSD-3-Clause       *
**********************************************/

#include "prefixsum.h"

void prefixsum_opt(int in[SIZE], int out[SIZE]) {
    int A = in[0];
    for(int i=0; i < SIZE; i++) {
#pragma HLS PIPELINE
        A = A + in[i];
        out[i] = A;
    }
}