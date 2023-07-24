#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *a, int *b);
size_t partition(int *array, int small, int large, size_t size);
void _sort(int *array, size_t left, size_t right, size_t size);
void shell_sort(int *array, size_t size);
void insertion_sort(int *array, size_t size, size_t gap);



/*Advanced Tasks*/
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void qs(int *array, ssize_t first, ssize_t last, int size);
int hoare_partition(int *array, int first, int last, int size);
void swap(int *array, ssize_t item1, ssize_t item2);
void swap(int arr[], int item1, int item2, int order);
void merge(int arr[], int low, int nelemnt, int order);
void bitonicsort(int arr[], int low, int nelemnt, int order, int size);

#endif
