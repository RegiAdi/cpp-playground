# Sets the minimum required version of cmake for a project.
cmake_minimum_required(VERSION 3.10)

# Sets the name of the project, and stores it in the variable PROJECT_NAME.
# When called from the top-level CMakeLists.txt also stores the project name 
# in the variable CMAKE_PROJECT_NAME. 
project(CMakeTutorial)

# Add an executable to the project using the specified source files.
add_executable(CMakeTutorial cmake_tutorial.cpp)

# Default value for CXX_STANDARD target property if set when a target is created.
# CXX_STANDARD specifies the C++ standard whose features are requested to build this target.
set(CMAKE_CXX_STANDARD 20)

# Default value for CXX_STANDARD_REQUIRED target property if set when a target is created.
# CXX_STANDARD_REQUIRED store boolean describing whether the value of CXX_STANDARD is a requirement.
set(CMAKE_CXX_STANDARD_REQUIRED True)