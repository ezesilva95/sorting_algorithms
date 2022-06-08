#include "sort.h"
/**
 * bubble_sort - func sorts array of int in ascd ord using Bubble sort algrithm
 * @size: size of array
 * @array: array of integers
 * Return: integers in ascending order
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0;
	int swap;

	if (array == NULL)
		return;

	while(j == 0)
	{
		j = 1;
		for (i = 0; i < size -1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				j = 0;
				print_array(array, size);
			}	
		}
	}
}

