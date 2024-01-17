#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers using
 *			linear search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Returns the first index where value is located, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	int temp = -1;
	size_t i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			temp = i;
			break;
		}
		else
		{
			continue;
		}
	}
	return (temp);
}
