#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: points to the head of list
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}

