cmake_minimum_required(VERSION 3.10)
project(Cockpit)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Dependencies
find_package(imgui CONFIG REQUIRED)

# Targets
add_subdirectory(app)
