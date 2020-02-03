#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * using the bubble sort
 * @array: array of elements
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int tmp = 0;

	if (size < 2 || array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
