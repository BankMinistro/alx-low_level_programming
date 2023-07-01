#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: input one
 * @src: input two
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int c;
	int z;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	z = 0;
	while (src[z] != '\0')
	{
		dest[c] = src[z];
		c++;
		z++;
	}

	dest[c] = '\0';
	return (dest);
}

