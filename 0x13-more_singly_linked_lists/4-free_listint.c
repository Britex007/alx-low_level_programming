#include "lists.h"

/**
 * free_listint - this frees a linked list
 * @head: is the head of a list.
 *
 * Return: this has no return.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
