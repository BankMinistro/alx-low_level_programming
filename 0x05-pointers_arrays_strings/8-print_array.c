#include "main.h"

/**
 * print_array - a function that prints n elementg of an array
 * @a: array name
 * @n: number of elements of the array
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < (n - 1); t++)
	{
		printf("%d, ", a[t]);
	}
	if (t == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
