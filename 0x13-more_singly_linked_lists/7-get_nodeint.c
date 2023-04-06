#include "lists.h"

/**
 * get_nodeint_at_index - this returns the nth node of a linked list
 * @head: is head of a list.
 * @index: is the index of the node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
