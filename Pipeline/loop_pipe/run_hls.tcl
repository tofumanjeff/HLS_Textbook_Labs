# Create a project
open_project -reset loop_pipe_prj

# Set the top-level function
set_top loop_pipeline

# Add source files
add_files loop_pipeline.cpp
add_files loop_pipeline.h
add_files -tb loop_pipeline_test.cpp
add_files -tb result.golden.dat

###########################################################
# Create a solution
open_solution -reset "solution1" -flow_target vivado

# Define technology and clock rate
set_part {xc7z020clg400-1}
create_clock -period 10 -name default

# Set optimization directives
set_directive_pipeline "loop_pipeline/LOOP_J"

# C Simulation
csim_design
# C Synthesis
csynth_design
# C/RTL Co-Simulation
cosim_design -trace_level all

###########################################################
# Create a solution
open_solution -reset "solution2" -flow_target vivado

# Define technology and clock rate
set_part {xc7z020clg400-1}
create_clock -period 10 -name default

# Set optimization directives
set_directive_pipeline "loop_pipeline/LOOP_I"

# C Synthesis
csynth_design
# C/RTL Co-Simulation
cosim_design -trace_level all

###########################################################
# Create a solution
open_solution -reset "solution3" -flow_target vivado

# Define technology and clock rate
set_part {xc7z020clg400-1}
create_clock -period 10 -name default

# Set optimization directives
set_directive_pipeline "loop_pipeline"

# C Synthesis
csynth_design
# C/RTL Co-Simulation
cosim_design -trace_level all

exit