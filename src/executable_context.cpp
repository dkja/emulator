#include "executable_context.h"

Executable_context::Executable_context()
    : _IP(0)
    , _SS(0)
    ,_memory(MEMORY_LIMIT)
    ,_stacks(STACKS_LIMIT)
{
}


Memory& Executable_context::get_memory()
{
    return this->_memory;
}

Stack_set& Executable_context::get_stacks()
{
    return this->_stacks;
}