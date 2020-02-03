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

	start = array[0];
	end = array[size - 1];

	pindex = partition(array, 0, size);
	printf("%i", array[0]);

}

int partition(int *array, int start, int end)
{
	int tmp = 0, aux = 0;
	unsigned int j;
	int pivot;

	
	pivot = array[end];
	for (j = start; j < end; j++)
	{
		if (array[start] < pivot)
		{
			tmp = array[start];
			array[start] = array[j];
			array[j] = tmp;
			start++;
		}
	}
	aux = array[start];
	array[start] = array[end];
	array[end] = aux;
	return start;
}

void split(int *array, int pindex, int end)
{
	unsigned int i, j;
	int *bot = 0, *top = 0;

	for (i = 0; i < pindex; i++)
	{
		bot[i] = array[i];
	}
	for (j = pindex; j < end; j++)
	{
		top[j] = array[j];
	}	
}

