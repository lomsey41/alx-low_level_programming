#include "main.h"

/**
 * print_rev - print string in reverse order
 * @s: string to be reversed
 * Return: void
 */

void print_rev(char *s)

{
	int len = 0;

	while (s[len] != '\n,')

	{
		len++;
	}
	while (len)
	{
		_putchar(s[--len]);
	}
	_putchar('\n');
}
