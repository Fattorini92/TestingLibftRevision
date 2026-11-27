#include "library.h"

void ftputnbr(int a)
{
    int b = a;
    if (a == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (b < 0)
    {
        ftputchar('-');
        b = -b;
    }
    if (b > 9)
    {
        ftputnbr(b / 10);
        ftputnbr(b % 10);
        return;
    }
    if (b >= 0 && b <= 9)
    {
        ftputchar(b + '0');
        return;
    }
    return;
}