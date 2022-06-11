#include "sort.h"
/**
 * selection_sort - sort array of int in ascd ord using Selection sort algrithm
 * @array: array of integers
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0;
	int swap, index;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
				index = j;
		}
		if (array[index] != array[i])
		{
			swap = array[i];
			array[i] = array[index];
			array[index] = swap;
			print_array(array, size);
		}
	}
}
