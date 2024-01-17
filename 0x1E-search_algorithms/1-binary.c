#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array using a binary
 *		search algorithm
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, otherwise -1.
 */

int binary_search(int *array, size_t size, int value)
{
	int i, mid, first = 0, last = size - 1;

	if (!array)
		return (-1);

	while (first <= last)
	{
		mid = (first + last) / 2;

		printf("Searching in array: ");
		for (i = first; i <= last; i++)
			printf("%i%s", array[i], i == last ? "\n" : ", ");

		if (array[mid] < value)
			first = mid + 1;
		else if (array[mid] > value)
			last = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
