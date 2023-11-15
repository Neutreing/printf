#include "main.h"

/**
 * _printf - Printf function
 * @format: Format string.
 * Return: Always return the number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int print_char = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	for (; *format; format++)
		if (*format != '%' || (*++format == '\0') || (*format == '%' && (++print_char)))
			print_char += write(1, format, 1);
		else if (*format == 'c')
			print_char += write(1, &va_arg(args, int), 1);
		else if (*format == 's')
			print_char += write(1, va_arg(args, char*), write(1, "", 1));

	va_end(args);
	return (print_char);
}
