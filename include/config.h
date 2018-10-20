#ifndef _EMULATOR_CONFIG_H_
#define _EMULATOR_CONFIG_H_

#include <cstdint>

using               MACHINE_WORD        = uint64_t;
const std::size_t   MACHINE_WORD_SIZE   = sizeof(MACHINE_WORD);


const unsigned int  MEMORY_LIMIT        = 1024*1024*1024;


const unsigned int  STACKS_LIMIT        = 16;
using               STACK_TYPE          = MACHINE_WORD;
// const unsigned int STACK_SIZE_LIMIT = 64*1024; // you shouldn't use this - DYNAMICATLLY ALLOCATED

#endif // !_EMULATOR_CONFIG_H_