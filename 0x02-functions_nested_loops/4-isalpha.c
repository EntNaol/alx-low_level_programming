#include "main.h"

/**
 * _isalpha - Entry point
 * @a: the integer value it receives
 * Description: checks if alphabet
 * Return: 1 if true. 0 if false
 */

int _isalpha(int a)
{
	if (a >= 'a' && a <= 'z')
	{
	return (1);
	}
	else if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
