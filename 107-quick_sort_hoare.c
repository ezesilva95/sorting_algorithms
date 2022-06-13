#include "sort.h"

/**
 * partition - partitate the array
 * @array: array of integers
 * @size: size of array
 * @low: start
 * @high: end
 */
int partition(int *array, int low, int high, size_t size)
{
	int i = low - 1, j = high + 1;
	int pivot = array[high];
	int swap;
	
	for (i = low, j = high; 1; i++, j--)
	{
		while (array[i] < pivot)
			i++;


		while (array[j] > pivot)
			j--;
		
		if (i >= j) 
			return (i);
		swap = array[i];
		array[i] = array[j];
		array[j] = swap;
		print_array(array, size);
	}
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
		quick_Sort(array, pivot, high, size);

	}
}

/**
 * quick_sort_horare - function that quick sort an array
 * @array: array of integers
 * @size: size of array
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL)
		return;
	quick_Sort(array, 0, size - 1, size);
}
