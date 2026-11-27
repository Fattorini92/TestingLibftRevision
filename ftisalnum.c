#include "library.h"

int ftisalnum(int c)
{
    if (ftisalpha(c) || ftisdigit(c))
        return (8);
    return (0);
}