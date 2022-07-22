cmake_minimum_required(VERSION 3.11)
project(hellwm)

file(GLOB SRC
     "src/*.hxx"
     "src/*.cxx"
)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

find_package(XCB REQUIRED)

include_directories(${XCB_INCLUDE_DIR})

add_executable(${PROJECT_NAME} ${SRC})
target_link_libraries(${PROJECT_NAME} ${XCB_LIBRARIES})
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 23)
