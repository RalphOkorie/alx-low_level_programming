#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at index position
 * @h: list head
 * @idx: unsigned integer index
 * @n: the integer value to be inserted
 *
 * Return: the new doubly linked list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *d_list = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx > 1 && d_list)
	{
		idx--;
		d_list = d_list->next;
	}

	if (idx > 1)
		return (NULL);

	if (d_list->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (new ==  NULL)
		return (NULL);

	new->n = n;
	d_list->next->prev = new;
	new->next = d_list->next;
	new->prev = d_list;
	d_list->next = new;

	return (new);
}
