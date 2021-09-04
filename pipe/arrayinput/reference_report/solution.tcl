###############################################
# Copyright (C) Copyright © 2021-2022, BOLEDU #
# SPDX-License-Identifier: BSD-3-Clause       #
###############################################

# solution1
set_directive_unroll "arrayinput/loop1"

# solution2
set_directive_unroll "arrayinput/loop1"
set_directive_array_partition -type complete "arrayinput" a
set_directive_array_partition -type complete "arrayinput" b
set_directive_array_partition -type complete "arrayinput" c

# solution3
set_directive_pipeline "arrayinput/loop1"

# solution4
set_directive_unroll "arrayinput/loop2"