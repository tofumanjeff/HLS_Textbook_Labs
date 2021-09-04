/**********************************************
* Copyright (C) Copyright © 2021-2022, BOLEDU *
* SPDX-License-Identifier: BSD-3-Clause       *
**********************************************/

#include "arrayinput.h"

void arrayinput(int a[N], int b[N], int c[N])
{
    int i, j;

    loop1: for (j = 0; j < N; j++)
    {
        loop2: for (i = 1; i < N/2; i++)
        {
            c[j] = c[j] + a[i] + b[i];
        }
    }
}
