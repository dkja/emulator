#ifndef _EMULATOR_EXECUTABLE_CONTEXT_H_
#define _EMULATOR_EXECUTABLE_CONTEXT_H_

#include "config.h"
#include <vector>
#include <stack>


using byte      = uint8_t;
using Memory    = std::vector<byte>;
using Stack_set = std::vector<std::stack<STACK_TYPE>>;


class Executable_context
{
  public:
    Executable_context();

    Memory&    get_memory();
    Stack_set& get_stacks();

  private:
    long long _IP;
    long long _SS;
    Memory    _memory;
    Stack_set _stacks;
};

#endif // !_EMULATOR_EXECUTABLE_CONTEXT_H_