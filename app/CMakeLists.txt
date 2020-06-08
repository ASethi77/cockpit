set(APP_SOURCE_DIR "${PROJECT_SOURCE_DIR}/app/src")
set(APP_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/app/include")

file(GLOB APP_SOURCE_FILES "${APP_SOURCE_DIR}/*.cpp")

message(STATUS "IMGUI INCLUDES ARE ${IMGUI_SOURCE_FILES} ${IMGUI_INCLUDE_DIR}")

add_executable(cockpit_app ${APP_SOURCE_FILES})
target_link_libraries(cockpit_app PRIVATE glfw imgui::imgui GLEW::GLEW)
target_include_directories(cockpit_app PRIVATE
        ${APP_INCLUDE_DIR}
        ${IMGUI_INCLUDE_DIR}
        ${GLFW_INCLUDE_DIR}
        ${GLEW_INCLUDE_DIR}
        ${IMPLOT_INCLUDE_DIR})