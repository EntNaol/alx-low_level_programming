#include "main.h"

/**
 * _isdigit - checks if a character is digit
 * @num: carrier variable
 * Return: 1 if true, 0 if false
 */

int _isdigit(int num)
{
	if (num >= '0' && num <= '9')
		return (1);

	else
		return (0);
}
