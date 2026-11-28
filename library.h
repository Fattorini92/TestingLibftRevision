
#ifndef LIBRARY_H
#define LIBRARY_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#include <stdint.h>
#include <bsd/string.h>
#include <limits.h>

void ftputchar(char c);
void ftputnbr(int a);
int ftatoi(const char *nptr);
void ftputstr(char *string);
int ftislower(int c);
int ftisupper(int c);
int ftisalpha(int c);
int ftisdigit(int c);
int ftisalnum(int c);
int ftisprint(int c);
size_t ftstrlen(const char *c);
void *ftmemset(void *s, int c, size_t n);
void ftbzero(void *s, size_t n);
void *ftmemcpy(void *dest, const void *src, size_t n);
void *ftmemmove(void *dest, const void *src, size_t n);
size_t ftstrlcpy (char *dest, const char *src, size_t size);

#endif