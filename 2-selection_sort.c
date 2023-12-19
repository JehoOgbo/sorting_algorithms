#include "sort.h"

/**
 * selection_sort - sorts an array of integers
 * Description: uses the selection sort algorithm
 * that is checks for the smallest numbers and arranges
 * them accordingly
 *
 * @array: integer array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int swap;
	size_t store, lock;
	int check;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		check = 0;
		swap = array[i];
		for (j = i; j < size - 1; j++)
		{
			if (swap > array[j + 1])
			{
				check = 1;
				swap = array[j + 1];
				store = j + 1;
			}
		}
		if (check == 1)
		{	lock = array[i];
			array[i] = swap;
			array[store] = lock;
			print_array(array, size);
		}
	}
}
