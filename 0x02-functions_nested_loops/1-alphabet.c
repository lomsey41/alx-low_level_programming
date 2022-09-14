#include"main.h"

/**
 * print_alphabet - prints alphabet
 *
 * description: prints alphabets from a through z
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
