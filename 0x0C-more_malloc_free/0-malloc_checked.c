#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: memory to be allocated
 *
 * Return: A pointer to the allocatted memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
