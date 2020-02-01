#include "sort.h"
#include <stdio.h>
void insertion_sort_list(listint_t **list)
{
    listint_t *tmp = *list;

    tmp = tmp->next;
    while (tmp)
    {
        if (tmp->prev->n > tmp->n)
        {
            tmp->prev->next = tmp->next;
            tmp->next = tmp->prev;
            tmp->prev = tmp->prev->prev;
            tmp->prev->next->prev = tmp->next;
            tmp->prev->next = tmp;
            printf("%i\n", tmp->n);
            print_list(*list);
        }
        tmp = tmp->next;
    }
        
}




