#include "library.h"

size_t ftstrlen(const char *c)
{
    size_t a;
    a = 0;
    while (c[a])
    {
        a++;
    }
    return (a);
}