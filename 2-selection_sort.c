#include "sort.h"

/**
 * selection_sort - sort an arraby finding the minimum
 * element in an unsorted list and moving it to the end
 * a sorted list.
 * @array: array to be sorted
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t a, b, min, tmp;

	for (a = 0; a < size - 1; a++)
	{
		min = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[min])
				min = b;
		}
		if (min != a)
		{
			tmp = array[a];
			array[a] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
