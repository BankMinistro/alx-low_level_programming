#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string to be reversed
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int t;

	while (s[counter] != '\0')
		counter++;
	for (t = 0; t < counter; t++)
	{
		counter--;
		rev = s[t];
		s[t] = s[counter];
		s[counter] = rev;
	}
}
