#include "lib2.h"

struct InternalStruct2
{
    int x;
    bool y;
};

InternalStruct2 * getInternalStruct2()
{
    return new InternalStruct2 { 123, false };
}