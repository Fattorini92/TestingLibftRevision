#include "library.h"

void *ftmemmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    if (dest == NULL || src == NULL)
        return (NULL);
    if (d < s)
        return (ftmemcpy(dest, src, n));
    while (n > 0)
    {
        d[n - 1] = s[n - 1];
        n--;
    }
    return (dest);
}

/*
DESCRIPTION
       The  memmove() function copies n bytes from memory area src to memory area dest.  The memory ar‐
       eas may overlap: copying takes place as though the bytes in src are first copied into  a  tempo‐
       rary  array  that does not overlap src or dest, and the bytes are then copied from the temporary
       array to dest.

RETURN VALUE
       The memmove() function returns a pointer to dest.






*/