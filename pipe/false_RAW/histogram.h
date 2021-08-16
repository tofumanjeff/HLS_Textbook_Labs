/**********************************************
* Copyright (C) Copyright © 2021-2022, BOLEDU *
* SPDX-License-Identifier: BSD-3-Clause       *
**********************************************/

#ifndef _HISTOGRAM_H_
#define _HISTOGRAM_H_

#define INPUT_SIZE 8
#define VALUE_SIZE 256

// Top functions
void histogram(int in[INPUT_SIZE], int hist[VALUE_SIZE]);
void histogram_dependence(int in[INPUT_SIZE], int hist[VALUE_SIZE]);
void histogram_opt1(int in[INPUT_SIZE], int hist[VALUE_SIZE]);

#endif