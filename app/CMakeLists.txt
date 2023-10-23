cmake_minimum_required(VERSION 3.17)
project(template-project-app)

set(APP_SOURCES
    main.cpp
)

add_executable(${PROJECT_NAME} ${APP_SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE template-project-lib)