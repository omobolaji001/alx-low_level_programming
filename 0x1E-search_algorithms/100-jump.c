#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array of integers, using
 * the Jump Search Algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Return: Returns the index where value is located, -1 otherwise.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t first = 0;
	size_t step = sqrt(size);

	if (!array)
		return (-1);

	while (array[step] <= value && step < size)
	{
		printf("Value checked array [%li]\n", first);
		printf("Value checked array [%li]\n", step);
		first = step;
		step += sqrt(size);

	}

	printf("Value found between indexes [%li] and [%li]\n", first, step);
	for (; first < step; first++)
	{
		printf("Value checked array [%li]\n", first);
		if (array[first] == value)
			return (first);
	}

	return (-1);
}
