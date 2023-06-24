#include "main.h"

/**
 * print_diagonal - print diagonal liness
 * @n: variable
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int r, a;

	if (n <= 0)
		_putchar('\n');
	for (r = 0; r < n; r++)
	{
		for (a = 0; a < r; a++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
