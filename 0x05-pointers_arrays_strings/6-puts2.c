#include "main.h"
/**
 * puts2 - function print only one character out of two
 * starting with the first character
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longi = 0;
	int b = 0;
	char *c = str;
	int d;

	while (*c != '\0')
	{
		c++;
		longi++;
	}
	b = longi - 1;
	for (d = 0 ; d <= b ; d++)
	{
		if (d % 2 == 0)
		{
			_putchar(str[d]);
		}
	}
	_putchar('\n');

}
