#include "main.h"

/**
 * print_rev - a  function prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: Nothingr
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\n')
		length++;

	while (length)
		_putchar(s[--length]);

	_putchar('\n');
}
