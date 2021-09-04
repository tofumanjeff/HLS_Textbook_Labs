/**********************************************
* Copyright (C) Copyright © 2021-2022, BOLEDU *
* SPDX-License-Identifier: BSD-3-Clause       *
**********************************************/

#ifndef _SWITCH_BUFFERRED_H_
#define _SWITCH_BUFFERRED_H_

#include "switch.h"
#include "buffer.h"

Path allocate(Path req);
Path decode(VData I1, VData I2);
void switch_2stage(VData I1, VData I2, VData *Odd, VData *Even, bool *acpt1, bool *acpt2);
void switch_buffered(VData I1, VData I2, VData *Odd, VData *Even, bool *acpt1, bool *acpt2);

#endif