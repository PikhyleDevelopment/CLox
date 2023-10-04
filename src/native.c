#include <stdio.h>
#include <time.h>

#include "vm.h"



Value clockNative(int argCount, Value* args) {
    if (argCount > 0) {
        runtimeError("Native function clock() expects 0 arguments.");
        return NIL_VAL;
    }
    return NUMBER_VAL((double)clock() / CLOCKS_PER_SEC);
}

Value printLineNative(int argCount, Value* args) {
    if (argCount < 0 || argCount > 1) {
        runtimeError("Native function println() expects either 0 or 1 arguments.");
        return NIL_VAL;
    }
    if (argCount != 1) {
        printf("\n");
        return NIL_VAL;
    }

    printValue(args[0]);
    printf("\n");
    return NIL_VAL;
}

Value exitNative(int argCount, Value* args) {
    if (argCount != 1) {
        runtimeError("Native function [exit(int code)] requires 1 argument but got %d.", argCount);
        return NIL_VAL;
    }
    double exitCode = AS_NUMBER(*args);
    freeVM();
    exit((int) exitCode);
    return NIL_VAL; // Unreachable
    
}