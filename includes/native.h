#pragma once

#include "vm.h"

Value clockNative(int argCount, Value* args);

Value printLineNative(int argCount, Value* args);

Value exitNative(int argCount, Value* args);