#include "sort.h"

/**
 * swaps_ints - Swaps two integers in an array
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 */

void swaps ints(int *a, int *b)
{

	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * bubble_sort - Uses the bubble sort alogirithm
 * to sort arrays in ascending order
 * @array: pointer array
 * @size: Size of the array
 * Description: Prints the array after each swap
 */


void bubble_sort(int *array, size_t size)
{

	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;
	while (bubbly == false)
	{
		bubbly == true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] < array[i + 1])
			{
				swaps_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;

	}
}
