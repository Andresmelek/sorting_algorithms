#include "sort.h"
#include <stdio.h>
/**
 * quick_sort - function that sorts the an array
 * using lomuto
 * @array: list of numbers to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	int start, end, pindex;

	start = 0;
	end = size - 1;
	sort(array, start, end, size);
	
}

int partition(int *array, int start, int end, size_t size)
{	
	int tmp = 0, aux = 0;
	unsigned int j, i = start;
	int pivot;

	
	pivot = array[end];
	for (j = i; j < end; j++)
	{
		if (array[i] < pivot)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			print_array(array, size);
		}
	}
	aux = array[i];
	array[i] = array[end];
	array[end] = aux;
	print_array(array, size);
}

void sort(int *array, int start, int end, size_t size)
{
	int pindex;
	
	if (start < end)
	{	
		pindex = partition(array, start, end, size);
		sort(array, start, pindex - 1, size);
		sort(array, pindex + 1, end, size);
	}
}

