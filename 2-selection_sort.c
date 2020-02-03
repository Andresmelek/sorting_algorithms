#include "sort.h"
/**
 * selection_sort - selection_sort
 * @array: ...
 * @size: ...
 *
*/
void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0, flag = 0, cont = 0;
	int min = 0, tmp = 0;

	if (size < 2 || array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		flag = 0;
		min = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < min)
			{
				if (array[j] < min)
				{
					min = array[j];
					flag = 1;
					cont = j;
				}
			}
		}
		if (flag == 1)
		{
			tmp = array[i];
			array[i] = min;
			array[cont] = tmp;
			print_array(array, size);
		}
	}
}
