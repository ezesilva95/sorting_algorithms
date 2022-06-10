#include "sort.h"
/**
 * partition - partitate the array
 * @array: array of integers
 * @low: start of array
 * @high: end of the array
 * @size: size of array
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int swap;
	int i = low, j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			swap = array[i];
			array[i] = array[j];
			array[j] = swap;
			print_array(array, size);
			i++;
		}
	}
	swap = array[i];
	array[i] = array[high];
	array[high] = swap;
	print_array(array, size);

	return (i);
}

/**
 * quick_Sort - sorts the array
 * @array: array of integers
 * @low: start of the array
 * @high: end of the array
 * @size: size of array
 */
void quick_Sort(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_Sort(array, low, pivot - 1, size);
		quick_Sort(array, pivot + 1, high, size);

	}
}

/**
 * quick_sort - function that quick sort an array
 * @array: array of integers
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;
	quick_Sort(array, 0, size - 1, size);
}
