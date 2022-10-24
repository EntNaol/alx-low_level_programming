#include "main.h"

/**
 * _strlen- measure the length of a string
 * @s: string pointer to check
 *
 * Return: int leng of the string
 */
int _strlen(char *s)
{
	int leng = 0;

	while (s[leng])
		leng++;
	return (leng);
}
