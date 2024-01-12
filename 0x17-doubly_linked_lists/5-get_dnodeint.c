#include "lists.h"

/**
 * get_dnodeint_at_index - get node index for an element
 * @head: doubly linked list head
 * @index: integer index number
 *
 * Return: node having the given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *d_list = head;

	if (d_list == NULL)
		return (NULL);

	while (index && d_list)
	{
		d_list = d_list->next;
		index--;
	}

	if (index)
		return (NULL);

	return (d_list);
}
