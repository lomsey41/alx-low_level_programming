#include"main.h"

/**
 * print_alphabet_x10 - prints alphabets 10x to user
 *
 *description: print a - z 10 times on different lines
 *
 */

void print_alphabet_x10(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		int alp;

		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}

		_putchar('\n');
	}
}
