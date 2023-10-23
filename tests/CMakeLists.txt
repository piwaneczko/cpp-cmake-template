cmake_minimum_required(VERSION 3.17)
project(template-project-tests)

add_subdirectory(googletest)

set(TESTS_SOURCES
    templatetests.cpp
)

include(GoogleTest)

add_executable(${PROJECT_NAME} ${TESTS_SOURCES})
add_definitions(-DUNIT_TESTS)
target_link_libraries(${PROJECT_NAME} PRIVATE gmock_main gtest_main template-project-lib)
gtest_discover_tests(${PROJECT_NAME})