#include "sort.h"

/**
 * insertion_sort_list - sort a doubly linked list
 * by insertion in ascending order
 * @list: doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr_swap, *new_swap;

	if (list == NULL || *list == NULL)
		return;

	curr_swap = (*list)->next;

	while (curr_swap != NULL)
	{
		new_swap = curr_swap->next;
		while (curr_swap->prev != NULL && curr_swap->prev->n > curr_swap->n)
		{
			curr_swap->prev->next =curr_swap->next;
			if (curr_swap->next != NULL)
				curr_swap->next->prev = curr_swap->prev;
			 curr_swap->next = curr_swap->prev;
			 curr_swap->prev = curr_swap->next->prev;
			 curr_swap->next->prev = curr_swap;

			if (curr_swap->prev == NULL)
				*list = curr_swap;
			else
				curr_swap->prev->next = curr_swap;

			print_list(*list);
		}
		curr_swap = new_swap;
	}
}
