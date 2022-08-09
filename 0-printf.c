#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: string format
 *
 * Return: number of character printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int val;

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	val = _vprintf(format, ap);
	va_end(ap);
	return (val);
}

/**
 * _vprintf - prints output according to format
 * @format: string format
 * @ap: variable argument
 *
 * Return: length of the characters printed
 */

int _vprintf(const char *format, va_list ap)
{
	int flag = 0;
	char *str;
	int count = 0;
	char buffer[1024];

	while (*format)
	{
		if (flag == 0)
		{
			if (*format == '%')
				flag = 1;
			else
			{
				putchar(*format);
				count++;
			}
		}
		else
		{
			switch (*format)
			{
				case 'c':
				{
					putchar(va_arg(ap, int));
					count++;
					break;
				}
				case 's':
				{
					str = va_arg(ap, char *);
					print_string(str);
					count++;
					break;
				}
				case '%':
					putchar('%');
					count++;
					break;
				case 'd':
				{
					int n = va_arg(ap, int);

					number_to_string(n, 10, buffer);
					print_string(buffer);
					count++;
					break;
				}

				default:
					break;
			}
			flag = 0;
		}
		format++;
	}
	return (count);
}

