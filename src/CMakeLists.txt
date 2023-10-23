cmake_minimum_required(VERSION 3.17)
project(template-project-lib)

set(LIB_SOURCES
    src/template.cpp
)
set(LIB_INCLUDE_DIRECTORIES
    src
)

add_library(${PROJECT_NAME} ${LIB_SOURCES})
include_directories(${LIB_INCLUDE_DIRECTORIES})
target_include_directories(${PROJECT_NAME} PUBLIC ${LIB_INCLUDE_DIRECTORIES})