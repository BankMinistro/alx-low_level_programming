#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
*/
int main(void)
{	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of an char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("size of a float: %lu byte(s)", sizeof(e));
	return (0);
}
