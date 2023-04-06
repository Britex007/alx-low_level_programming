#include "lists.h"

/**
 * print_listint - this  prints all the elements of a list.
 * @h: is the head of a list.
 *
 * Return: number of nodes present.
 */
size_t print_listint(const listint_t *h)
{
	size_t xnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		xnodes++;
	}
	return (xnodes);
}
