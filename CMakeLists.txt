cmake_minimum_required(VERSION 3.14)
project(arrayDemo C)

set(CMAKE_C_STANDARD 99)

add_executable(arrayDemo main.c array.c array.h linkedList.c linkedList.h)