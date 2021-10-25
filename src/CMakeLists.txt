cmake_minimum_required(VERSION 3.0.0)

set(JSON_BuildTests OFF CACHE INTERNAL "")

set(SOURCES main.cpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(Json ${SOURCES})

target_link_libraries(Json PRIVATE nlohmann_json::nlohmann_json)
target_include_directories(Json PUBLIC ${MY_INCLUDE_DIR})