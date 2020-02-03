#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - Insert sort
 * @list: List
 *
 *
**/
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = *list;

	if (list == NULL || *list == NULL)
		return;
	while (tmp)
	{
		while ((tmp->prev != NULL) && tmp->prev->n > tmp->n)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;
			if (tmp->prev == NULL)
				(*list = tmp);
			else
				(tmp->prev->next = tmp);
			print_list(*list);
		}
		tmp = tmp->next;
	}
}
