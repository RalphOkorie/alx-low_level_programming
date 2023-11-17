#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - it adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh_node, *current_node;
	size_t n;

	fresh_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	fresh_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	fresh_node->len = n;
	fresh_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = fresh_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = fresh_node;
	}

	return (*head);
}
