#include "lib.h"

struct InternalStruct
{
    int x;
    bool y;
};

InternalStruct * getInternalStruct()
{
    return new InternalStruct { 456, true };
}