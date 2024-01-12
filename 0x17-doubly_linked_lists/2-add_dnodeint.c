#include "lists.h"

/**
 * add_dnodeint - add a node
 * @head: list head
 * @n: const integer
 *
 * Return: address of the new assignment
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		printf("Malloc failed");
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
	{
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}
