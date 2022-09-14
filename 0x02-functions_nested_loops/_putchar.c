#include <unistd.h>

/**
 * _putchar - print out the output to users
 *
 * return: alway 1 for success and -1 for error
 */

int _putchar(char x)
{
	return (write(1, &x, 1));
}
