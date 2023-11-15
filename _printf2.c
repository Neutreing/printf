#include "main.h"

/**
 * _printf - Printf function
 * @format: Format string.
 * Return: Always return the number of characters printed.
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
        if (*format != '%' || (*++format == '\0') || (*format == '%' && ++print_char))
        {
            write(1, format, 1);
            print_char++;
        }
        else if (*format == 'd' || *format == 'i')
        {
            int num = va_arg(args_list, int);
            char buffer[12];  // Assuming maximum 32-bit integer

            int i = 0;
            if (num < 0)
            {
                write(1, "-", 1);
                print_char++;
                num = -num;
            }

            while (num != 0)
            {
                buffer[i++] = num % 10 + '0';
                num /= 10;
            }

            if (i == 0)
            {
                write(1, "0", 1);
                print_char++;
            }

            while (--i >= 0)
            {
                write(1, &buffer[i], 1);
                print_char++;
            }
        }

        format++;
    }

    va_end(args_list);
    return (print_char);
}
