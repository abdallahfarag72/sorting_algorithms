#include "sort.h"

/**
 * swap - swaps two integers
 * @x: First integer
 * @y: Second integer
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: Array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped;

	if (size < 2 || array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapped = 1;
				swap(&array[j + 1], &array[j]);
				print_array(array, size);
			}
		}
		/* if no swapping happened */
		/* then the array is already sorted */
		if (swapped == 0)
			break;
	}
}
