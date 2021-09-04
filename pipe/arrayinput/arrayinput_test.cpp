/**********************************************
* Copyright (C) Copyright © 2021-2022, BOLEDU *
* SPDX-License-Identifier: BSD-3-Clause       *
**********************************************/

#include "arrayinput.h"
#include <iostream>
#include <fstream>

using namespace std;

void golden(int a[N], int b[N], int c[N])
{
    for (int j = 0; j < N; j++)
    {
        for (int i = 1; i < N/2; i++)
        {
            c[j] = c[j] + a[i] + b[i];
        }
    }
}

int main()
{
    int a[N], b[N], c[N], c_golden[N];
    int retval = 0;

    for (int i = 0; i < N; i++)
    {
        a[i] = i + 1;
        b[i] = i + 2;
        c[i] = i;
        c_golden[i] = i;
    }

    arrayinput(a, b, c);
    golden(a, b, c_golden);

    for (int i = 0; i < N; i++)
    {
        if (c[i] != c_golden[i])
        {
            cout << "Mismatch!  " << "result: " << c[i] << ",  golden: " << c_golden[i] << endl;
            retval = 1;
        }
    }

    if (retval == 0)
    {
        cout << "Pass!" << endl;
    }

    return retval;
}
