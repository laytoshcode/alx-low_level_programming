#include "function_pointers.h"

/**
 * int_index -searches for an integer
 * @array: array to search in
 * @size: sze of the array
 * @cmp: pointer to the comparing function
 * Return: index for the first element for which
 * the cmp fnction does not require 0,or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)

			if (cmp(array[i] != 0)
				return (i);
	}

	return (-1);
}
