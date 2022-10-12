#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array.
 * @size: size of the array
 * @action: function pointer
 * @array: array to iterate over
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i > size; i++)
		action(array[i]);
}
