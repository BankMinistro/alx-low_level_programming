#include "main.h"

/**
 * _strncat - a function that concatenate two strings
 * using at most n bytes from src
 * @dest: input one
 * @src: input two
 * @n: input three
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c;
	int z;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	z = 0;
	while (z < n && src[z] != '\0')
	{
	dest[c] = src[z];
	c++;
	z++;
	}
	dest[c] = '\0';
	return (dest);
}

