#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    listint_t *tmp = *list;

    tmp = tmp->next;
    while (*list)
    {
        
        if (tmp != NULL && tmp->prev->n > tmp->n)
        {
        /*
            tmp->prev->next = tmp->next;
            tmp->next->prev = tmp->prev;
            tmp->prev = tmp->next->prev->prev;
            if (tmp->prev == NULL)
                tmp->next->prev->prev = tmp;
            else
            {
                tmp->prev->prev->next = tmp;
                
            }
            tmp->next = tmp->next->prev;
            if (tmp->prev == NULL)
            {
                *list = tmp;
                print_list(*list); 
            }
            else
            {

                print_list(*list);
            }
            */
        }
        tmp = tmp->next;
    }
        
}




