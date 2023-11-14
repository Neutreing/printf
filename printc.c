#include "main.h"

/**
 * print_c - prints a character.
 * @val_list: arguments.
 * Return: integer.
 */
int print_c(va_list val_list)
{
	char s;

	s = va_arg(val_list, int);
	_putchar(s);
	return (1);
}
