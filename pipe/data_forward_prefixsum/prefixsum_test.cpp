/**********************************************
* Copyright (C) Copyright © 2021-2022, BOLEDU *
* SPDX-License-Identifier: BSD-3-Clause       *
**********************************************/

#include "stdio.h"
#include "prefixsum.h"

int main() {
    int in[SIZE];
    int out[SIZE];
    for(int i = 0; i < SIZE; i++) {
        in[i] = i;
    }
    prefixsum(in, out);
    //prefixsum_opt(in, out);
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", out[i]);
    }
    printf("\n");
}
