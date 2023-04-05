#include "lists.h"

/**
 * pop_listint - program deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int node_h;
	listint_t *h;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	node_h = temp->n;
	h = temp->next;

	free(temp);

	*head = h;

	return (node_h);
}
