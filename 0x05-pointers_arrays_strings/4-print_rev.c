#include "main.h"
/**
 * print_rev - function
 *
 * @s: pointer of parameter
 * Return: Always (success)
 */
void print_rev(char *s)

{
	int length = 0;

	while ([--length] != '\0')
	{
		length++;
	}
	while (length > 0)
		_putchar(s[--length]);

	_putchar(10);
}
