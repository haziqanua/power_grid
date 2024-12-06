cmake_minimum_required(VERSION 3.10.0)
project(powergrid VERSION 0.1.0 LANGUAGES CXX)

add_executable(powergrid main.cpp)

add_subdirectory(assets)

target_link_libraries(powergrid PUBLIC assets)

target_include_directories(powergrid PUBLIC
"${PROJECT_BINARY_DIR}"
"${PROJECT_SOURCE_DIR}/assets"
)