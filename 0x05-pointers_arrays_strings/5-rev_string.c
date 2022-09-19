#include "main.h"

/**
 * rev_string - a function that reverses a string
 * followed by a new line
 * @s: an input string
 * Return Nothing
 */
void rev_string(char *s);
{
	int len = 0, i = 0;
	char aux;

	while (s[len] != '\n')
		len++;

	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux
	}

}
