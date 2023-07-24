#include "sort.h"

/**
 * bubble_sort - sort an array by bubbling through in ascending order
 * @array:array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t n = size;
	size_t i, j;
	int swap;

	if (array != NULL)
	{
		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap = array[j];
					array[j] = array[j + 1];
					array[j + 1] = swap;
				}
			}
			print_array(array, size);
		}
	}
}
