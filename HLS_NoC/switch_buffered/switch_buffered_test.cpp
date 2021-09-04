/**********************************************
* Copyright (C) Copyright © 2021-2022, BOLEDU *
* SPDX-License-Identifier: BSD-3-Clause       *
**********************************************/

#include <iostream>
#include <fstream>
#include "switch_buffered.h"

using namespace std;

int main()
{
    VData I1, I2;
    VData Odd, Even;
    bool acpt1, acpt2;
    ifstream INPUT;

    INPUT.open("input.dat");
    cout << "Cycle\tI1\tI2\tOdd.v\tOdd.d\tEven.v\tEven.d\tacpt1\tacpt2" << endl;
    for (int i = 0; i < 17; i++)
    {
        INPUT >> I1.d >> I2.d;
        I1.v = true;
        I2.v = true;

        switch_buffered(I1, I2, &Odd, &Even, &acpt1, &acpt2);

        cout << i+1 << "\t" << I1.d << "\t" << I2.d << "\t" << Odd.v << "\t" << Odd.d << "\t" << Even.v << "\t" << Even.d << "\t" << acpt1 << "\t" << acpt2 << endl;
    }
    INPUT.close();

    return 0;
}
