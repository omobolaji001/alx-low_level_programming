#include "search_algos.h"
/**
 * binary_search - Searches for value in a sorted array of integers using
 *			binary search algorithm.
 * @array: Pointer to the first element of array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: index where value is located, otherwise return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int index = -1;
	int i, mid, first = 0, last = (int)size - 1;

	if (!array)
		return (-1);

	while (first <= last)
	{
		printf("searching in array:");
		for (i = 0; i < size; i++)
			printf(" %d,", array[i]);
		printf("\n");

		if (array[first] == value)
			return (first);
		if (array[last] == value)
			return (last);

		mid = (first + last) / 2;
		if (array[mid] == value)
		{
			index = mid;
			return (index);
		}
		else if (array[mid] < value)
		{
			first = mid + 1;
		}
		else
		{
			last = mid - 1;
		}
	}
	return (-1);
}


