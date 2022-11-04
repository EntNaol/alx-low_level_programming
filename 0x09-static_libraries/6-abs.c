#include "main.h"

/**
 * _abs - Entry point
 * @m: m is an integer
 * Description: prints the absolute value of an integer
 * Return: int
 */

int _abs(int m)
{
	if (m > 0)
	{
		return (m);
	}
	else if (m < 0)
	{
		return (-m);
	}
	else
	{
		return (m);
	}
}
