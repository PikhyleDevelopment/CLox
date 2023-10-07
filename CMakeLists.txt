cmake_minimum_required(VERSION 3.22...3.26)
project(CLox C)

set(CMAKE_C_STANDARD 11)

include_directories(includes)

add_executable(CLox
        includes/chunk.h
        includes/common.h
        includes/compiler.h
        includes/debug.h
        includes/memory.h
        includes/native.h
        includes/object.h
        includes/scanner.h
        includes/table.h
        includes/value.h
        includes/vm.h
        src/chunk.c
        src/compiler.c
        src/debug.c
        src/main.c
        src/memory.c
        src/native.c
        src/object.c
        src/scanner.c
        src/table.c
        src/value.c
        src/vm.c)
