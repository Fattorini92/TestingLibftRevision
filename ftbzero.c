#include "library.h"

void ftbzero(void *s, size_t n)
{
    size_t a;
    unsigned char *string;
    a = 0;
    string = (unsigned char *)s;
    while (a < n)
    {
        string[a] = '\0';
        a++;
    }
    return;
}

/*
DESCRIPTION
       The  bzero()  function  erases  the
        data  in the n bytes of the memory
         starting at the location
       pointed to by s,
        by writing zeros
        (bytes containing '\0')
        to that area.

       The explicit_bzero() function performs
       the same task as bzero().
       It  differs  from  bzero()  in
       that  it  guarantees that
       compiler optimizations will
        not remove the erase operation
        if the compiler deduces
         that the operation is "unnecessary".

RETURN VALUE
       None.

       */