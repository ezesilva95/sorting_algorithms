#include "sort.h"

/**
 * _swap - swaps two values in an array
 * @array: array of int
 * @i: i
 * @j: j
 * Return: No return
 */
void _swap(int *array, int i, int j)
{
        int swap;

        swap = array[i];
        array[i] = array[j];
        array[j] = swap;
}

/**
 * partition - partitate the array
 * @array: array of integers
 * @low: start of array
 * @high: end of the array
 * @size: size of arrayu
 * Return: position of the pivot
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low, j;

	for (j = low; j <= high; j++)
	{
		if (array[j] < pivot)
		{
			_swap(array, i, j);
			i++;
		}
	}
	_swap(array, i, high);
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
	if (array == NULL || size < 2)
		return;
	quick_Sort(array, 0, size - 1, size);
}
