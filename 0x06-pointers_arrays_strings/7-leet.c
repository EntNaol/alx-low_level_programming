#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int i = 0, n;
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + i) != '\0')
	{
		for (n = 0; n < 5; n++)
		{
			if (*(s + i) == lowercase[n] || *(s + i) == uppercase[n])
			{
				*(s + i) = num[n];
				break;
			}
		}
		i++;
	}

	return (s);
}
