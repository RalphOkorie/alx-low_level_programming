#include "lists.h"

/**
 * free_listp2 -It  frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *tem;
	listp_t *curr;

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

/**
 * free_listint_safe - It frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t rnodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (rnodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		rnodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (rnodes);
}
