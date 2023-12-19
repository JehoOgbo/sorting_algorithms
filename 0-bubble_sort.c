#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sorts an array of integers in ascending order
 * Description: the biggest elements are sorted before the big ones
 * using bubble sort algorithm
 *
 * @array: array of integers to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t check;
	size_t j;
	size_t new;

	if (size <= 0 || array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			check = 0;	/* if already sorted list */
			if (array[j] > array[j + 1])
			{
				new = array[j];
				array[j] = array[j + 1];
				array[j + 1] = new;
				print_array(array, size);
				check = 1;
			}
		}
		if (check == 0) /* optimize code */
			return;
	}
}
