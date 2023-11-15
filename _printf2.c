#include "main.h"

int _printf(const char *format, ...)
{
	if (format == NULL)
		return (-1);


	va_list args_list;

	va_start(args_list, format);


	int print_char = 0;

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
		}
		format++;
	}

	va_end(args_list);
	return (print_char);
}
