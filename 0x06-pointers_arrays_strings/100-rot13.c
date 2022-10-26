#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *s)
{
	int i = 0, n;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13keys[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != '\0')
	{
		for (n = 0; n < 52; n++)
		{
			if (*(s + i) == alphabet[n])
			{
				*(s + i) = rot13keys[n];
				break;
			}
		}
		i++;
	}

	return (s);
}
