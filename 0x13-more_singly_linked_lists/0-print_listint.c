#include "lists.h"

/**
* print_listint - prints all the elements 
* of a listint_t list.
* @h: head of a singly linked list.
* Return: number of elements in the list.
*/

size_t print_listint(const listint_t *h)
{
	size_t num;
	const listint_t *temp;

	num = 0;
	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		num++;
	}
	return (num);
}
