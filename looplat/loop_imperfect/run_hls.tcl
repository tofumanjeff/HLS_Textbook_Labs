###############################################
# Copyright (C) Copyright © 2021-2022, BOLEDU #
# SPDX-License-Identifier: BSD-3-Clause       #
###############################################

# Create a project
open_project -reset loop_imperfect_prj

# Set the top-level function
set_top loop_imperfect

# Add source files
add_files loop_imperfect.cpp
add_files loop_imperfect.h
add_files -tb loop_imperfect_test.cpp
add_files -tb result.golden.dat

# Create a solution
open_solution -reset "solution1" -flow_target vivado

# Define technology and clock rate
set_part {xc7z020clg400-1}
create_clock -period 10 -name default

close_project

######################################################

# Create a project
open_project -reset loop_perfect_prj

# Set the top-level function
set_top loop_perfect

# Add source files
add_files loop_perfect.cpp
add_files loop_perfect.h
add_files -tb loop_perfect_test.cpp
add_files -tb result.golden.dat

# Create a solution
open_solution -reset "solution1" -flow_target vivado

# Define technology and clock rate
set_part {xc7z020clg400-1}
create_clock -period 10 -name default

exit