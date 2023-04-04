#include "lists.h"

/**
* add_nodeint_end - adds a new node to thhe end of lists_t list.
* @head: head of an existing lists_t list.
* @n: element of the new list.
* Return: address of the new node or NULL of it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	(void)temp;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	temp = *head;

	if (*head == NULL)
		*head = new_node;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;

	return (*head);
}
