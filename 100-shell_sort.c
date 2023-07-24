#include "sort.h"
<<<<<<< HEAD

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
=======
#include <stdio.h>
/**
 * _swap - swaped 2 values.
 * @array: the array for swap him values.
 * @i: First index
 * @j: Second index
 * Return: Nothing
 */
void _swap(int *array, int i, int j)
{
	int tmp;

	if (array[i] != array[j])
	{
		tmp = array[i];
		array[i] = array[j];
>>>>>>> 45d67243becdae60de933bf3d15722f83caa9920
		array[j] = tmp;
	}
}

/**
<<<<<<< HEAD
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
=======
 * shell_sort - sort the list and print the changes
 * @array: The array to sort.
 * @size: Size of the array
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t h = 0,  i, j;

	if (size < 2)
		return;

	while (h <= size / 3)
		h = h * 3 + 1;

	while (h >= 1)
	{
		for (i = h; i < size; i++)
			for (j = i; j >= h && array[j] < array[j - h]; j -= h)
				_swap(array, j, j - h);
		h /= 3;
>>>>>>> 45d67243becdae60de933bf3d15722f83caa9920
		print_array(array, size);
	}
}
