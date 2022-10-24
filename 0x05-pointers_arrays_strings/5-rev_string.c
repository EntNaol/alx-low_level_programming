#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return
 */

void rev_string(char *s)
{
	int len, i, m;
	char item;

	for (len = 0; s[len] != '\0'; len++)
		;
	i = 0;
	m = len / 2;

	while (m--)
	{
		item = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = item;
		i++;
	}
}
