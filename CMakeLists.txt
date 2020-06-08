cmake_minimum_required(VERSION 3.10)
project(Cockpit)
enable_language(C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Dependencies
set(THIRD_PARTY_ROOT_DIR "${PROJECT_SOURCE_DIR}/third_party")

find_package(imgui CONFIG REQUIRED)
find_path(IMGUI_INCLUDE_DIR "imgui.h")

find_package(glfw3 CONFIG REQUIRED)
find_path(GLFW_INCLUDE_DIR "GLFW/glfw3.h")

find_package(GLEW REQUIRED)
find_path(GLEW_INCLUDE_DIR "GL/glew.h")

set(IMPLOT_ROOT_DIR "${THIRD_PARTY_ROOT_DIR}/implot")
set(IMPLOT_INCLUDE_DIR "${IMPLOT_ROOT_DIR}")
set(IMPLOT_SOURCE_FILES "${IMPLOT_ROOT_DIR}/implot.cpp")
set(IMPLOT_DEMO_FILES "${IMPLOT_ROOT_DIR}/implot_demo.cpp")

# Targets
add_subdirectory(app)
