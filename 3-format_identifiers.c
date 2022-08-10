#include <stdarg.h>
#include "main.h"

/**
 * case_c - checks for %c specifier
 * @count: length of string
 * @ap: pointer to variadic arguments
 */

void case_c(int count, va_list ap)
{
	count = 0;
	_putchar(va_arg(ap, int));
	count++;
}

/**
 * case_s - checks for %s specifier
 * @count: length of string
 * @ap: pointer to variadic arguments
 */

void case_s(int count, va_list ap)
{
	char *str;

	count = 0;
	str = va_arg(ap, char *);
	print_string(str);
	count++;
}

/**
 * case_percent - checks for %
 * @count: length of string
 */

void case_percent(int count)
{
	count = 0;
	_putchar('%');
	count++;
}

/**
 * case_d - checks for %d specifier
 * @count: length of string
 * @ap: pointer to variadic arguments
 */

void case_d(int count, va_list ap)
{
	char buffer[1024];
	int n;

	count = 0;
	n = va_arg(ap, int);
	number_to_string(n, 10, buffer);
	print_string(buffer);
	count++;
}
