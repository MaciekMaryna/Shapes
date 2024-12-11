cmake_minimum_required(VERSION 3.10)
project(Shapes)

set(HEADER_DIR "${CMAKE_SOURCE_DIR}/Inc")
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/Src")

set(SRC
    main.cpp
    ${SOURCE_DIR}/TestApp.cpp
)

message("${SRC}") # print to the console
add_executable(${PROJECT_NAME} ${SRC})
target_include_directories(${PROJECT_NAME} PUBLIC ./Inc)
