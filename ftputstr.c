#include "library.h"

void ftputstr(char *string)
{
    int a = 0;
    while (string[a])
    {
        ftputchar(string[a]);
        a++;
    }
    return;
}