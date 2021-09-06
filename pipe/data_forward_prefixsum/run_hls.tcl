###############################################
# Copyright (C) Copyright © 2021-2022, BOLEDU #
# SPDX-License-Identifier: BSD-3-Clause       #
###############################################

# Create a project
open_project -reset data_forward_prefixsum_prj

# Set the top-level function
set_top prefixsum

# Add source files
add_files prefixsum.h
add_files prefixsumSW.cpp
add_files prefixsum_opt.cpp
add_files -tb prefixsum_test.cpp

# Create a solution
open_solution -reset "solution1" -flow_target vivado

# Define technology and clock rate
set_part {xc7z020clg400-1}
create_clock -period 10 -name default

exit