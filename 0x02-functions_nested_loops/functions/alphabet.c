#incude"main.h"

/**
 * print_alphabet - use putchar to print alphabet from a-z
 *
 */

void print_alphabet(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar(alp);
	_putchar('\n');
}
