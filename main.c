
#include "library.h"

int main()
{
    char a = 'A';
    long unsigned int b;
    int c;
    int d;
    const char *string = "       ";
    char memorytest1[] = "azerty";
    char memorytest2[] = "123546";
    b = SIZE_MAX;
    c = INT_MIN;
    d = '0';
    ftputchar(a);
    ftputchar('\n');
    ftputnbr(c);
    ftputchar('\n');
    /*comparacion atoi con ftatoi*/

    if (atoi(string) == ftatoi(string))
    {
        ftputstr("Funcionan Igual\n");
        ftputstr("atoi =");
        ftputnbr(atoi(string));
        ftputchar('\n');
        ftputstr("ftatoi =");
        ftputnbr(ftatoi(string));
        ftputchar('\n');
    }
    if (atoi(string) != ftatoi(string))
    {
        ftputstr("NO Funcionan Igual\n");
        ftputstr("atoi =");
        ftputnbr(atoi(string));
        ftputchar('\n');
        ftputstr("ftatoi =");
        ftputnbr(ftatoi(string));
        ftputchar('\n');
    }

    if (ftisalpha(d) == isalpha(d))
    {
        ftputstr("Funcionan Igual\n");
        ftputstr("isalpha =");
        ftputnbr(isalpha(d));
        ftputchar('\n');
        ftputstr("ftisalpha =");
        ftputnbr(ftisalpha(d));
        ftputchar('\n');
    }
    if ((ftisalpha(d) != isalpha(d)))
    {
        ftputstr("NO Funcionan Igual\n");
        ftputstr("isalpha =");
        ftputnbr(isalpha(d));
        ftputchar('\n');
        ftputstr("ftisalpha =");
        ftputnbr(ftisalpha(d));
        ftputchar('\n');
    }

    if (ftisalnum(d) == isalnum(d))
    {
        ftputstr("Funcionan Igual\n");
        ftputstr("isalnum =");
        ftputnbr(isalnum(d));
        ftputchar('\n');
        ftputstr("ftisalnum =");
        ftputnbr(ftisalnum(d));
        ftputchar('\n');
    }
    if (ftisalnum(d) != isalnum(d))
    {
        ftputstr("NO Funcionan Igual\n");
        ftputstr("isalnum =");
        ftputnbr(isalnum(d));
        ftputchar('\n');
        ftputstr("ftisalnum =");
        ftputnbr(ftisalnum(d));
        ftputchar('\n');
    }
    if (ftstrlen(string) == strlen(string))
    {
        ftputstr("Funcionan Igual\n");
        ftputstr("strlen =");
        ftputnbr(strlen(string));
        ftputchar('\n');
        ftputstr("ftstrlen =");
        ftputnbr(ftstrlen(string));
        ftputchar('\n');
    }
    if (ftstrlen(string) != strlen(string))
    {
        ftputstr("NO Funcionan Igual\n");
        ftputstr("strlen =");
        ftputnbr(strlen(string));
        ftputchar('\n');
        ftputstr("ftstrlen =");
        ftputnbr(ftstrlen(string));
        ftputchar('\n');
    }
    if (ftmemset(memorytest1, '0', 1) == ftmemset(memorytest2, '0', 1))
    {
        ftputstr("Si funcionan igual\n");
        ftputstr("ftmemset es =");
        ftmemset(memorytest1, '0', 1);
        write(1, memorytest1, ftstrlen(memorytest1));
        ftputchar('\n');
        ftputstr("memset es =");
        memset(memorytest2, '0', 1);
        write(1, memorytest2, ftstrlen(memorytest2));
        ftputchar('\n');
    }
    if (ftmemset(memorytest1, '0', 1) != ftmemset(memorytest2, '0', 1))
    {
        ftputstr("No funcionan igual\n");
        ftputstr("ftmemset es = ");
        ftmemset(memorytest1, '0', 1);
        write(1, memorytest1, ftstrlen(memorytest1));
        ftputchar('\n');
        ftputstr("memset es = ");
        memset(memorytest2, '0', 1);
        write(1, memorytest2, ftstrlen(memorytest2));
        ftputchar('\n');
    }

    if (ftmemcpy(memorytest1, memorytest2, 4) == memcpy(memorytest1, memorytest2, 4))
    {
        ftputstr("Si funcionan igual\n");
        ftputstr("ftmemcpy es =");
        ftmemcpy(memorytest1, memorytest2, 4);
        write(1, memorytest1, ftstrlen(memorytest1));
        ftputchar('\n');
        ftputstr("memcpy es =");
        memcpy(memorytest1, memorytest2, 4);
        write(1, memorytest2, ftstrlen(memorytest2));
        ftputchar('\n');
    }

    ftputstr("Si funcionan igual\n");
    ftputstr("ftbzero es =");
    ftbzero(memorytest1, 4);
    write(1, memorytest1, 7);
    ftputchar('\n');
    ftputstr("bzero es =");
    bzero(memorytest2, 4);
    write(1, memorytest2, 7);
    ftputchar('\n');

    return (0);
}