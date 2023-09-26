#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "common.h"
#include "chunk.h"
#include "debug.h"
#include "vm.h"

int main(int argc, const char* argv[]) {
	initVM();
	// Global bytecode chunk
	Chunk chunk;
	// Initialize the chunk
	initChunk(&chunk);

	/*int constant = addConstant(&chunk, 1.0);
	writeChunk(&chunk, OP_CONSTANT, 123);
	writeChunk(&chunk, constant, 123);*/

	int constant = addConstant(&chunk, 1.0);
	writeChunk(&chunk, OP_CONSTANT, 123);
	writeChunk(&chunk, constant, 123);

	constant = addConstant(&chunk, 2.0);
	writeChunk(&chunk, OP_CONSTANT, 123);
	writeChunk(&chunk, constant, 123);

	constant = addConstant(&chunk, 3.0);
	writeChunk(&chunk, OP_CONSTANT, 123);
	writeChunk(&chunk, constant, 123);

	writeChunk(&chunk, OP_MULTIPLY, 123);

	writeChunk(&chunk, OP_ADD, 123);

	constant = addConstant(&chunk, 4.0);
	writeChunk(&chunk, OP_CONSTANT, 123);
	writeChunk(&chunk, constant, 123);

	constant = addConstant(&chunk, 5.0);
	writeChunk(&chunk, OP_CONSTANT, 123);
	writeChunk(&chunk, constant, 123);

	writeChunk(&chunk, OP_NEGATE, 123);

	writeChunk(&chunk, OP_DIVIDE, 123);

	writeChunk(&chunk, OP_SUBTRACT, 123);

	writeChunk(&chunk, OP_RETURN, 123);



	/* TESTING ONLY */
	disassembleChunk(&chunk, "test chunk");
	interpret(&chunk);
	// Cleanup
	freeVM();
	freeChunk(&chunk);
	return 0;
}