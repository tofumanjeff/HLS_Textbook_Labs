/**********************************************
* Copyright (C) Copyright © 2021-2022, BOLEDU *
* SPDX-License-Identifier: BSD-3-Clause       *
**********************************************/

#include <stdio.h>
#include "histogram.h"

void histogram_golden(int in[INPUT_SIZE], int hist[VALUE_SIZE]) {
	int val;
	for(int i = 0; i < INPUT_SIZE; i++) {
		val = in[i];
		hist[val] = hist[val] + 1;
	}
}

int main() {
	int fail = 0;
	int values[] = {4,2,4,3,4,3,4,3};
	int y_sw[VALUE_SIZE] = {};
    int y[VALUE_SIZE] = {};

	histogram_golden(values, y_sw);
    histogram(values, y);
    //histogram_dependence(values, y);
    //histogram_opt1(values, y);

	for(int i = 0; i < INPUT_SIZE; i++)
		if(y_sw[i] != y[i]) {
            printf("%d %d %d", i, y_sw[i], y[i]);
			fail = 1;
        }

	if(fail == 1)
		printf("FAILED\n");
	else
		printf("PASS\n");

	return fail;
}
