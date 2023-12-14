#include "main.h"

/**
 * _printf - Printf function
 * @format: Format string.
 * Return: Always return number of characters printed.
 */

int _printf(const char *format, ...)
{
	int print_char = 0;
	va_list args_list;

	if (format == NULL)
		return (-1);

	va_start(args_list, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			print_char++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				print_char++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args_list, int);
				write(1, &c, 1);
				print_char++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args_list, char*);
				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;
				write(1, str, str_len);
				print_char += str_len;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args_list, int);
				char buffer[12];  // Assumes a 32-bit int, add more space if needed
				int digits = 0;

				if (num < 0)
				{
					write(1, "-", 1);
					print_char++;
					num = -num;
				}

				do
				{
					buffer[digits++] = num % 10 + '0';

					num /= 10;
				}
				while (num > 0);

				while (digits-- > 0)
				{
					write(1, &buffer[digits], 1);
					print_char++;
				}
			}
		}
		format++;
	}

	va_end(args_list);
	return (print_char);
}
