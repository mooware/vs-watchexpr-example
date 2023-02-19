#include "lib.h"
#include "lib2.h"
#include <iostream>
#include <cstdint>

int main(int argc, char ** argv)
{
    auto *ptr1 = getInternalStruct();
    auto *ptr2 = getInternalStruct2();
    // use the values so they're not optimized out
    std::cout << uintptr_t(ptr1) << uintptr_t(ptr2) << std::endl;
}