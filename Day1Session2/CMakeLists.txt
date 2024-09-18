cmake_minimum_required(VERSION 3.16)

# Project Name
project(Tutorial1)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Geant4 package
find_package(Geant4 REQUIRED)

# Define the executable
add_executable(Tutorial1 Tutorial1.cc)

# Include Geant4 headers
include_directories(${Geant4_INCLUDE_DIRS})

# Link Geant4 libraries to the executable
target_link_libraries(Tutorial1 ${Geant4_LIBRARIES})

# Optional: Debugging info
message(STATUS "Geant4 include directories: ${Geant4_INCLUDE_DIRS}")
message(STATUS "Geant4 libraries: ${Geant4_LIBRARIES}")
