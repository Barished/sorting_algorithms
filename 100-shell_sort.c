#include "sort.h"

/**
 * insertion_sort - sort an array
 * by insertion in ascending order
 * @array: array to be sorted
 * @size: size of array
 * @gap: distance between elements to be sorted
 */

void insertion_sort(int *array, size_t size, size_t gap)
{
	size_t i, j;
	int tmp;

	for (i = gap; i < size; i++)
	{
		tmp = array[i];
		for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)
		{
			array[j] = array[j - gap];
		}
		array[j] = tmp;
	}
}

/**
 * shell_sort - sort an array using Knuth sequence
 * @array: array to sort
 * @size: size of array
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1;
	size_t i;

	while (gap < size)
	{
		gap = gap * 3 + 1;
	}

	while (gap > 0)
	{
		gap = (gap - 1) / 3;

		for (i = 0; (i + gap) < size; i++)
		{
			 insertion_sort(array + i, size - i, gap);
		}
		print_array(array, size);
	}
}
