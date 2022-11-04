#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int m = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (m < n)
	{
		*(dest + i) = *(src + m);
		if (*(src + m) == '\0')
			break;
		i++;
		m++;
	}
	return (dest);
}
