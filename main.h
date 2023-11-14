#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int print_c(va_list val_list);
int print_s(va_list val_list);
int _strlenc(const char *s);
int _strlen(char *s);
int _putchar(char c);
int _printf(const char *format, ...);
int print37(void);


#endif
