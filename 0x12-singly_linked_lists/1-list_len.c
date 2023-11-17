#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - It show the number of elements of a list
  * @h: A linked list
  *
  * Return: The number of elements of a list
  */
size_t list_len(const list_t *h)
{
	size_t icount = 0;

	while (h)
	{
		h = h->next;
		icount++;
	}

	return (icount);
}
