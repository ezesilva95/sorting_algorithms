#include "sort.h"
/**
 * shell_sort - sorts array of int in ascding ordr using shell sort algorithm
 * @array: array of integers to sort
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	unsigned int interval = 1, i, j;
	int swap;

	if (array == NULL)
		return;

	while (interval < size / 3)
		interval = interval * 3 + 1;

	while (interval)
	{
		for (i = interval; i < size; i++)
		{
			swap = array[i];
			for (j = i; j >= interval && array[j - interval] > swap;
					j -= interval)
			{
				array[j] = array[j - interval];
			}
			array[j] = swap;
		}
		print_array(array, size);
		interval /= 3;
	}
}
