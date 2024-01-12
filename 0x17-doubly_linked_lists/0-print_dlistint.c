#include "lists.h"

/**
 * print_dlistint - prints the contents of a d-list
 * @h: list head
 *
 * Return: size_t length of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			len++;
		}
	}
	return (len);
}
