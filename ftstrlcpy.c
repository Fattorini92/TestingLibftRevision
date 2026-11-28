#include "library.h"

size_t ftstrlcpy (char *dest, const char *src, size_t size)
{
    size_t a;
    a = 0;
    if (size == 0)
    return(ftstrlen(src));
    while(src[a] && (a < size - 1))
    {
        dest[a] = src[a];
        a++;
    }
    dest[a] = '\0';
    return(ftstrlen(src));
}