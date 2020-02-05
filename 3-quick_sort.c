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
	int start, end;

	start = 0;
	end = size - 1;
	sort(array, start, end, size);
}

/**
 * partition - function that subsarray the array
 * @array: list of numbers to be sorted
 * @start: where the array starts
 * @end: where the array ends
 * @size: size of the array
 * Return: returns index
 */
int partition(int *array, int start, int end, size_t size)
{
	int tmp = 0;
	int j = 0, i = 0;
	int pivot;

	pivot = array[end];
	i = start - 1;
	for (j = start; j <= end; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	return (i);

}
/**
 * * sort - recursion to sort the list
 * @array: list of numbers to be sorted
 * @start: where the array starts
 * @end: where the array ends
 * @size: size of the array
 */
void sort(int *array, int start, int end, size_t size)
{
	int pindex = 0;

	if (start < end)
	{
		pindex = partition(array, start, end, size);
		sort(array, start, pindex - 1, size);
		sort(array, pindex + 1, end, size);
	}
}
