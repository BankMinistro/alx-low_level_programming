#include "main.h"

/**
 * print_line - print straight line
 * @n: Number of lines
 * Return: Always 0.
 */

void print_line(int n)

{
	int z;

	for (z = 0; z < n; z++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

