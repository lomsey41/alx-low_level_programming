#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * followed by a new line
 * @s: an input string
 * Return Nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\n')
		len++;

	while (len)
		_putchar(5[--len]);

	_putchar('\n')
}
