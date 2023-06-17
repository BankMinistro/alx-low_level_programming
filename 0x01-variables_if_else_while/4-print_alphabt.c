#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	char ge = 'a';

	while (ge <= 'z')
	{
		if (ge == 'e' || ge == 'q')
			ge++;
		putchar(ge);
		ge++;
	}
	putchar('\n');
	return (0);
}
