#include <stdio.h>
/**
 * main - Elijah Kalu ALX S.E Student
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	int a = 0;
	int b, c;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = 0;
			while (c <= 9)
			{
				if (a != b && a < b && b != c && b < c)
				{
					putchar(a + 48);
					putchar(b + 48);
					putchar(c + 48);

					if (a + b + c != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}

	putchar('\n');
	return (0);
}
