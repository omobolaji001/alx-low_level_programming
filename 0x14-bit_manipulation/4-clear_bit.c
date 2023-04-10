#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 for success, -1 otherwise.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
