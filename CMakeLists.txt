cmake_minimum_required(VERSION 3.20)

project(RTSP_Server VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(EXE_NAME RtspServer)

aux_source_directory(./src SRC)
aux_source_directory(./src/base SRC)
aux_source_directory(./src/net SRC)

add_executable(${EXE_NAME} ${SRC})

target_include_directories(${EXE_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)









