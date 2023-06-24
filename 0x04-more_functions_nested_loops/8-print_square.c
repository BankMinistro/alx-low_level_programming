#include "main.h"

/**
 * print_square - print a square
 * @size: size of the square
 * Return: Always 0.
 */

void print_square(int size)
{
	int r, a;

	if (size <= 0)
		_putchar('\n');

	for (r = 0; r < size; r++)
	{
		for (a = 0; a < size; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
