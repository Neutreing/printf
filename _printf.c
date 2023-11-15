#include "main.h"

/**
 * _printf - Printf function
 * @format: Format string.
 * Return: Always return number of characters printed.
 */

int _printf(const char *format, ...)
{
	if (!format)
	return (-1);

	va_list args;

	va_start(args, format);


	int count = 0;


	for (; *format; format++)
		if (*format != '%')
			count += write(1, format, 1);
		else if (*++format == '\0')
			break;
		else if (*format == 'c' || *format == '%')
			count += write(1, format, 1);
		else if (*format == 's')

		{

			char *str = va_arg(args, char*);

			count += write(1, str, write(1, "", 1));

		}

	va_end(args);
	return (count);
}
