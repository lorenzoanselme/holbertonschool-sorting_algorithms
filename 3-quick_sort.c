#include "sort.h"

/**
 * swap_ints - swaps two integers in an array
 * @a: first integer
 * @b: second integer
 */
static void swap_ints(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - partitions the array using Lomuto scheme
 * @array: array to partition
 * @low: starting index
 * @high: ending index (pivot)
 * @size: size of the array (for printing)
 *
 * Return: final pivot position
 */
static int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap_ints(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}

	if (i != high)
	{
		swap_ints(&array[i], &array[high]);
		print_array(array, size);
	}

	return (i);
}

/**
 * quick_sort_recursive - recursive quick sort
 * @array: array to sort
 * @low: starting index
 * @high: ending index
 * @size: size of the array
 */
static void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = lomuto_partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot_index - 1, size);
		quick_sort_recursive(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array using the Quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, (int)size - 1, size);
}
