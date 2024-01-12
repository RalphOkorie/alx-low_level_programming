#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: list head
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *d_list;

	while (head)
	{
		d_list = head;
		head = head->next;
		free(d_list);
	}
}
