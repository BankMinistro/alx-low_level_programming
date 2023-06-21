#include <main.h>
/**
 *  main - functions nested loops tasks
 *
 * Return: Always (0)
 */
int main(void)
{
	int i = 0, b;

	while (i < 10)
	{
		b = 'a';
		while (b <= 'z')
		{
			putchar(b);
			b++;
		}
		putchar('\n');
		i++;
	}
	return (0);
}
