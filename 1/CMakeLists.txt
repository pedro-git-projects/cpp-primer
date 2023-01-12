cmake_minimum_required(VERSION 3.14)

set(PROJECT_NAME Bookstore)

project(${PROJECT_NAME} VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


set(INCLUDE_SOURCES
        headers/
)

include_directories(${INCLUDE_SOURCES})
link_directories(${INCLUDE_SOURCES})

set(PROJECT_SOURCES
        src/main.cc

        src/exercises.cc headers/exercises.h
        headers/sales_item.h

)

#add_library(CthulluCharacterGeneratorLib STATIC ${PROJECT_SOURCES})

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

#target_link_libraries(CthulluCharacterGenerator CthulluCharacterGeneratorLib)
