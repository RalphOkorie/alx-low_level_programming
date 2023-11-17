#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of inodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t inodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		inodes++;
		h = h->next;
	}

	return (inodes);
}
