#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	int u;

	for (u = 0; u < 26; u++)
	{
		putchar('a' + u);
	}
	for (u = 0; u < 26; u++)
	{
		putchar('A' + u);
	}
	putchar('\n');
	return (0);
}
