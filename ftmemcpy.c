#include "library.h"

void *ftmemcpy(void *dest, const void *src, size_t n)
{
    size_t a;
    unsigned char *d;
    unsigned char *s;
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    a = 0;
    while (a < n)
    {
        d[a] = s[a];
        a++;
    }
    return (dest);
}

/*
DESCRIPTION
The memcpy() function copies n bytes from memory area src to memory area dest.
  The memory areas must not overlap.
  Use memmove(3) if the memory areas do overlap.

    RETURN VALUE
    The memcpy() function returns a pointer to dest.
    */