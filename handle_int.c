#include "main.h"

/**
 * handle_int - handles the 'd' and 'i' conversion specifiers
 * @args: arguments list
 *
 * Return: returns the number of characters printed
 */
int handle_int(va_list args)
{
	int number = va_arg(args, int);
	char buffer[12];
	int len = sprintf(buffer, "%d", number);

	write(1, buffer, len);

	return (len);
}
