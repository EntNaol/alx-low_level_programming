#include "main.h"
/**
 * *_strcat - concatenates @src to @dest
 * @src: is the string pointer to append to destination
 * @dest: is the string pointer destination to be concatenated on
 *
 * Return: a pointer result which append @src to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (n >= 0)
	{
		*(dest + i) = *(src + n);
		if (*(src + n) == '\0')
			break;
		i++;
		n++;
	}

	return (dest);
}
