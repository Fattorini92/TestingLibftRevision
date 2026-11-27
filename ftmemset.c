#include "library.h"

void *ftmemset(void *s, int c, size_t n)
{
    unsigned char *string;
    size_t a;
    a = 0;
    string = (unsigned char *)s;
    while (a < n)
    {
        string[a] = (unsigned char)c;
        a++;
    }
    return (s);
}
/*
DESCRIPTION
The memset() function fills the first n bytes
    of the memory area pointed to by s with the
    constant byte c.

    RETURN VALUE
    The memset() function returns a pointer
    to the memory area s.
    */