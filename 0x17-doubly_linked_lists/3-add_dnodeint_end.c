#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: doubly linked list head
 * @n: constant integer
 *
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *d_list, *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!head || !*head)
	{
		*head = new;
		return (new);
	}
	d_list = *head;

	while (d_list->next)
		d_list = d_list->next;

	d_list->next = new;
	new->prev = d_list;

	return (new);
}
