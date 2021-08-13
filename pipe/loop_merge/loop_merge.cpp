/**********************************************
* Copyright (C) Copyright © 2021-2022, BOLEDU *
* SPDX-License-Identifier: BSD-3-Clause       *
**********************************************/

#include "loop_merge.h"

void loop_merge(data_t a[N], data_t b[N], data_t c[N], bool d[N])
{
Add:
    for (int i = 0; i < N; i++)
    {
        if (d[i])
        {
            a[i] = b[i] + c[i];
        }
    }

Sub:
    for (int i = 0; i < N; i++)
    {
        if (!d[i])
        {
            a[i] = b[i] - c[i];
        }
    }
}