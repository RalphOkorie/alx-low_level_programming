#include "lists.h"

/**
 * free_listint2 - It frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *tem;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((tem = curr) != NULL)
		{
			curr = curr->next;
			free(tem);
		}
		*head = NULL;
	}
}
