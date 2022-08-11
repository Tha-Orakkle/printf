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
	int flag = 0, count = 0, i;

	while (*format)
	{
		if (flag == 0)
		{
			if (*format == '%')
				flag = 1;
			else
			{
				_putchar(*format);
			}
		count++;
		}
		else
		{
			switch (*format)
			{
				case 'c':
					case_c(count, ap);
					break;
				case 's':
					case_s(count, ap);
					break;
				case '%':
					case_percent(count);
					break;
				case 'd':
					case_d(count, ap);
					break;
				case 'i':
					case_d(count, ap);
					break;
				default:
				{
					_putchar('%');
					for (i = 0; format[i] && format[i] != '\n'; i++)
						_putchar(format[i++]);
				}
			}
			flag = 0;
		}
		format++;
	}
	return (count);
}
