#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 * Return: Always  0.
 */

void more_numbers(void)
{
	int y, z;

	for (y = 1; y <= 10; y++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z >= 10)
			_putchar('1');
			_putchar(z % 10 + '0');
		}
		_putchar('\n');
	}
}
