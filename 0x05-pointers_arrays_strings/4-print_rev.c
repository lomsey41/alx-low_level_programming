#include "main.h"

/**
 * print_rev - print a string, in reverse,
 * follwed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\n')
			break;
		count++;
	}

	for ((count  -;  count >= 0; count--))
		_putchar([count]);
	_putchar('\n');
}
