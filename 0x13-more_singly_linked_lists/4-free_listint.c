#include "lists.h"

/**
* free_listint - frees a listint_t list.
* @head: head of a singly linked list
* Return: no return value.
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	do {
		head = head->next;
		free(temp);
	} while ((temp = head) != NULL);
}
