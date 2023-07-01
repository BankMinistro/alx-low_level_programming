#include "main.h"
/**
 * reverse_array - a function that reverses the contents
 * of an array of integers
 * @a: input array
 * @n: number of elements of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;
	int w;

	for (x = 0; x < n--; x++)
	{
		w = a[x];
		a[x] = a[n];
		a[n] = w;
	}
}

