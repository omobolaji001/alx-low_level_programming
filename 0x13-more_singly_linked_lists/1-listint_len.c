#include "lists.h"

/**
* listint_len - returns the number of elements in a linked list.
* @h: head of a linked list.
* Return: number of elements in the list.
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t n;

	temp = h;
	n = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
