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

	int constant = addConstant(&chunk, 1.2);
	writeChunk(&chunk, OP_CONSTANT, 123);
	writeChunk(&chunk, constant, 123);

	writeChunk(&chunk, OP_RETURN, 123);

	/* TESTING ONLY */
	disassembleChunk(&chunk, "test chunk");
	interpret(&chunk);
	// Cleanup
	freeVM();
	freeChunk(&chunk);
	return 0;
}