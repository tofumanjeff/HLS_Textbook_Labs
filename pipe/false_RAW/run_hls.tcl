###############################################
# Copyright (C) Copyright © 2021-2022, BOLEDU #
# SPDX-License-Identifier: BSD-3-Clause       #
###############################################

# Create a project
open_project -reset false_RAW_prj

# Set the top-level function
set_top histogram

# Add source files
add_files histogram_opt1.cpp
add_files histogram_dependence.cpp
add_files histogramSW.cpp
add_files histogram.h
add_files -tb histogram_test.cpp

# Create a solution
open_solution -reset "solution1" -flow_target vivado

# Define technology and clock rate
set_part {xc7z020clg400-1}
create_clock -period 10 -name default

exit