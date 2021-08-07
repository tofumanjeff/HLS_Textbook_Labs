/**********************************************
* Copyright (C) Copyright © 2021-2022, BOLEDU *
* SPDX-License-Identifier: BSD-3-Clause       *
**********************************************/

#include <iostream>
#include <fstream>
#include "loop_merge.h"

using namespace std;

int main()
{
    data_t a[N], b[N], c[N];
    bool d[N];
    int retval = 0;
    ofstream FILE;

    // Create input data
    for (int i = 0; i < N; i++)
    {
        b[i] = i;
        c[i] = i * 2;
        d[i] = i % 2;
    }

    // Save the results to a file
    FILE.open("result.dat");

    // Call the function
    loop_merge(a, b, c, d);

    for (int i = 0; i < N; i++)
    {
        FILE << a[i] << endl;
    }
    FILE.close();

    // Compare the results file with the golden results
    retval = system("diff --brief -w result.dat result.golden.dat");
    if (retval != 0)
    {
        cout << "Test failed  !!!" << endl;
        retval=1;
    }
    else
    {
        cout << "Test passed !" << endl;
    }

    // Return 0 if the test passed
    return retval;
}