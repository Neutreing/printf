#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int binary(int num);
int octal(int num);
int my_putchr(char c);
int put_ss(char *c);

#endif
