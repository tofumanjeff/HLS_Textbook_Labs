###############################################
# Copyright (C) Copyright © 2021-2022, BOLEDU #
# SPDX-License-Identifier: BSD-3-Clause       #
###############################################

# Create a project
open_project -reset assertion_prj

# Set the top-level function
set_top loop_sequential_assert

# Add source files
add_files loop_sequential_assert.cpp
add_files loop_sequential_assert.h
add_files -tb loop_sequential_assert_test.cpp
add_files -tb result.golden.dat

# Create a solution
open_solution -reset "solution1" -flow_target vivado

# Define technology and clock rate
set_part {xc7z020clg400-1}
create_clock -period 10 -name default

exit