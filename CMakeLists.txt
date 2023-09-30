cmake_minimum_required(VERSION 3.26)
project(CLox C)

set(CMAKE_C_STANDARD 11)

include_directories(includes)

add_executable(CLox
        includes/chunk.h
        includes/common.h
        includes/compiler.h
        includes/debug.h
        includes/memory.h
        includes/object.h
        includes/scanner.h
        includes/table.h
        includes/value.h
        includes/vm.h
        chunk.c
        compiler.c
        debug.c
        main.c
        memory.c
        object.c
        scanner.c
        table.c
        value.c
        vm.c)
