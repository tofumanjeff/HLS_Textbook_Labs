###############################################
# Copyright (C) Copyright © 2021-2022, BOLEDU #
# SPDX-License-Identifier: BSD-3-Clause       #
###############################################

# Create a project
open_project -reset switch_buffered_prj

# Set the top-level function
set_top switch_buffered

# Add source files
add_files buffer.h
add_files switch.h
add_files switch_buffered.cpp
add_files switch_buffered.h
add_files -tb input.dat
add_files -tb switch_buffered_test.cpp

# Create a solution
open_solution -reset "solution1" -flow_target vivado

# Define technology and clock rate
set_part {xc7z020clg400-1}
create_clock -period 10 -name default

exit