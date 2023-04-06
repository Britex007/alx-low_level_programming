#include "lists.h"

/**
 * listint_len - this returns the number of 
 * elements in a linked list.
 * @h: is the head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t xnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		xnodes++;
	}
	return (xnodes);
}
