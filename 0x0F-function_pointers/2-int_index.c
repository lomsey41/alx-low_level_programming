#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @size: number of elements in the array
 * @cpm: a pointer to compare funtion  values
 * @array: array to search in
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <=0)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
