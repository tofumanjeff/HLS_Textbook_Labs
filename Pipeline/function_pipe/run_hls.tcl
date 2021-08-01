# Create a project
open_project -reset function_pipe_prj

# Set the top-level function
set_top loop_functions

# Add source files
add_files loop_functions.cpp
add_files loop_functions.h
add_files -tb loop_functions_test.cpp
add_files -tb result.golden.dat

###########################################################
# Create a solution
open_solution -reset "solution1" -flow_target vivado

# Define technology and clock rate
set_part {xc7z020clg400-1}
create_clock -period 10 -name default

# C-simulation
csim_design
# C-synthesis
csynth_design
# C/RTL Co-simulation
cosim_design -trace_level all

###########################################################
# Create a solution
open_solution -reset "solution2" -flow_target vivado

# Define technology and clock rate
set_part {xc7z020clg400-1}
create_clock -period 10 -name default

# Set optimization directives
set_directive_inline -off "sub_func"

# C-synthesis
csynth_design
# C/RTL Co-simulation
cosim_design -trace_level all

exit