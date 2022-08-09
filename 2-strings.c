#include "main.h"

/**
 * number_to_string - converts integer to string
 * @number: number to be converted
 * @base: base of number
 * @buf: new string
 */

void number_to_string(int number, int base, char *buf)
{
	int i = 0, j;
	char tmp[65];

	if (number < 0)
	{
		*buf++ = '-';
		number *= -1;
	}
	if (number == 0)
	{
		*buf = '0';
		*buf = '\0';
		return;
	}
	while (number)
	{
		int rem = number % base;

		if (rem >= 10)
			tmp[i++] = 'a' + (rem - 10);
		else
		{
			tmp[i] = '0' + rem;
			i++;
		}
		number /= base;
	}
	for (j = i - 1; j >= 0; j--)
		*buf++ = tmp[j];

	*buf = '\0';
}

/**
 * print_string - prints string
 * @s: pointer to string
 */

void print_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		putchar(s[i]);
		i++;
	}
}
