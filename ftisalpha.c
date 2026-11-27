#include "library.h"

int ftisalpha(int c)
{
    if (ftisupper(c) || ftislower(c))
    {
        return (1024);
    }
    return (0);
}