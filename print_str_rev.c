#include "main.h"

/**
 * print_str_rev - printing string in reverse
 * @str: string being printed
 * Return: no. of strings being printed
 */

int print_str_rev(char *str)
{
	int count = 0, rev = 0;

	while (str[rev])
		rev++;
	count = rev;

	count = rev;
	rev--;
	while (rev >= 0)
	{
		_putchar(str[rev]);
		rev--;
	}
	return (count);
}
