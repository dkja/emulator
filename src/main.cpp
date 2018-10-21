
#include <iostream>
#include "executable_context.h"

using namespace std;





processor
{

    run()

protected:
    load_memory()
    load_memory_from_file();
    
    executable_context
}

// executable_context
// {
//     IP      { long long }    
//     SS      { long long }    // io mapping ?? yes
//     memory  { array<byte> }
//     stacks  { array<stack> }
// }







int main()
{
    Executable_context context{};

    auto mem = context.get_memory();
    auto stacks = context.get_stacks();
     
    auto m_s = mem.size();
    auto s_s = stacks.size();
    

    stacks[0].push(5);
    stacks[0].push(0);

    auto x = stacks[0].top();
        stacks[0].pop();
    auto y = stacks[0].top();


    return 0;
}