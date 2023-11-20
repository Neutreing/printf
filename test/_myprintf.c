#include "main.h"

/**
 * _printf - Printf function
 * @format: Format string.
 * Return: Always return number of characters printed.
 */

int _printf(const char *format, ...)
{
	unsigned int i, str_count, count = 0;

	va_list args_list;


	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args_list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			my_putchr(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			my_putchr(va_arg(args_list, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str_count = put_ss(va_arg(args_list, char *));
			i++;
			count += (str_count);
		}
		else if (format[i + 1] == '%')
		{
			my_putchr('%');
		}


		count++;
	}

	va_end(args_list);
	return (count);
}

