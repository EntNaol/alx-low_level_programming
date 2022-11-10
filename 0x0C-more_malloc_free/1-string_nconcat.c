#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ccat;
	unsigned int i = n, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j]; j++)
		i++;

	ccat = malloc(sizeof(char) * (i + 1));

	if (ccat == NULL)
		return (NULL);

	i = 0;

	for (j = 0; s1[j]; j++)
		ccat[i++] = s1[j];

	for (j = 0; s2[j] && j < n; j++)
		ccat[i++] = s2[j];

	ccat[i] = '\0';

	return (ccat);
}
