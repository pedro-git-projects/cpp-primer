cmake_minimum_required(VERSION 3.14)

set(PROJECT_NAME Ch2)
set(PROJECTLIB_NAME Ch2Lib)

project(${PROJECT_NAME} VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


########################## Adding Google Test ###########################

include(FetchContent)
FetchContent_Declare(googletest
	GIT_REPOSITORY	https://github.com/google/googletest
	GIT_TAG release-1.12.1
)
FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
	FetchContent_Populate(googletest)
	add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BUILD_DIR})
endif()

#########################################################################


set(INCLUDE_SOURCES
        headers/
)

include_directories(${INCLUDE_SOURCES})
link_directories(${INCLUDE_SOURCES})

set(PROJECT_SOURCES
        src/main.cc

        src/exercises.cc headers/exercises.h
        headers/examples.h
)


add_library(${PROJECTLIB_NAME} STATIC ${PROJECT_SOURCES})

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

target_link_libraries(${PROJECT_NAME} ${PROJECTLIB_NAME})

########################## Google Test libs bin and linking ###########################

set(TEST_SOURCES
	tests/test.cc
	tests/exercises_test.cc
)

add_executable(TestRunner ${TEST_SOURCES})
target_link_libraries(TestRunner ${PROJECTLIB_NAME} gtest_main gmock_main)
