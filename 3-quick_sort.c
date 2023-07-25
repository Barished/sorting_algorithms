#include "sort.h"

/**
 * swap_t - swap one element for another
 * @a: first argument
 * @b: second argument
 * Return: nothing
 */

void swap_t(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


/**
 * partition - partitions elements in an
 *             array using the Lomuto scheme.
 * @array: array to be partitioned
 * @left: left section of partition from
 *        where comparison and sorting starts.
 * @right: right section of the partition
 *         to where comparison and sorting bubbles through.
 * @size: size of array
 * Return: index of partition.
 */

size_t partition(int *array, int left, int right, size_t size)
{
	int a, b, pivot;

	pivot = array[right];
	a = left - 1;
	for (b = left; b < right; b++)
	{
		if (array[b] < pivot)
		{
			a++;
			if (a != b)
			{
				swap_t(&array[a], &array[b]);
				print_array(array, size);
			}
		}
	}
	if (array[right] < array[a + 1])
	{
		swap_t(&array[a + 1], &array[right]);
		print_array(array, size);
	}
	return (a + 1);
}

/**
 * _sort - a function that calls iself to sort an array.
 * @array: array to be sorted
 * @left: beginning of the array counting from left
 * @right: end of the array to the right.
 * @size: size of array
 */

void _sort(int *array, size_t left, size_t right, size_t size)
{
	size_t pivot;

	if (right <= left)
		return;
	pivot = partition(array, left, right, size);
	if (pivot > left)
		_sort(array, left, pivot - 1, size);
	if (pivot < size - 1)
		_sort(array, pivot + 1, right, size);
}

/**
 * quick_sort - sort an array using using quick sort method.
 * @array: array to be sorted
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	size_t left, right;

	if (array == NULL || size == 0 || size == 1)
		return;
	left = 0;
	right = size - 1;
	_sort(array, left, right, size);
}
