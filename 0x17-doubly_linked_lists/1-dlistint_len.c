#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a d-list
 * @h: doubly linked list head
 *
 * Return: size_t lenght of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h != NULL)
	{
		while (h)
		{
			len++;
			h = h->next;
		}
	}

	return (len);
}
