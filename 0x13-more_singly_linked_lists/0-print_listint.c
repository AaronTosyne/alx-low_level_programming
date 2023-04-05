#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (h != NULL)
			printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}