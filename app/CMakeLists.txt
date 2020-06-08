set(APP_SOURCE_DIR "${PROJECT_SOURCE_DIR}/app/src")

file(GLOB APP_SOURCE_FILES "${APP_SOURCE_DIR}/*.cpp")

add_executable(cockpit_app ${APP_SOURCE_FILES})
target_link_libraries(cockpit_app PRIVATE imgui::imgui)
target_include_directories(cockpit_app PRIVATE ${IMGUI_INCLUDES_PUBLIC})