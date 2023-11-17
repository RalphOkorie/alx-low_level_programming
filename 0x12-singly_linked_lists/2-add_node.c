#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Adds a new node at the beginning of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *team;
	int length = 0;

	team = malloc(sizeof(list_t));
	if (team == NULL)
		return (NULL);

	while (str[length])
		length++;

	team->len = length;
	team->str = strdup(str);
	team->next = *head;
	*head = team;
	return (team);
}
