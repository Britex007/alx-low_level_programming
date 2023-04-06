#include "lists.h"

/**
 * add_nodeint - this adds a new node at the start
 * of a linked list
 * @head: this is the head of a list.
 * @n: is an n element.
 *
 * Return: address of the new element or  NUll if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
