cmake_minimum_required(VERSION 3.26)

project(main)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
set(SRC "src")

# disable warnings
add_definitions(-w)

find_package(json-c CONFIG)
find_package(LibXml2 REQUIRED)

include_directories(include)
include_directories(${SRC}/Array)
include_directories(${PROJECT_SOURCE_DIR})
include_directories(/usr/include/libxml2)

add_executable(${PROJECT_NAME}
    ${SRC}/Arrays/chess_board.c
    ${SRC}/main.c
    #        ${SRC}/list.c
    #        ${SRC}/threadfactory.c
    #        ${SRC}/main.c
    #        src/list.c
    #        include/list.h
    #        src/stack.c
    #        include/stack.h
    #        include/queue.h
    #        src/queue.c
    )

target_link_libraries(${PROJECT_NAME} -lcurl -lpthread -lxml2 -ljson-c -lpcap)
