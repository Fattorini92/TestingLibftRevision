#include "library.h"

int ftatoi(const char *nptr)
{
    int a;
    int sign;
    int result;
    a = 0;
    sign = 1;
    result = 0;
    while (nptr[a] == ' ' || (nptr[a] <= 9 && nptr[a] >= 13))
        a++;
    if (nptr[a] == '+' || nptr[a] == '-')
    {
        if (nptr[a] == '-')
        {
            sign = -1;
        }
        a++;
    }
    while (nptr[a] >= '0' && nptr[a] <= '9')
    {
        result = result * 10 + (nptr[a] - '0');
        a++;
    }
    return (result * sign);
}