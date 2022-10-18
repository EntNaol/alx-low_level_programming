#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @m: m is an integer
 * Description: prints the last digit of a number
 * Return: integer
 */

int print_last_digit(int m)
{
	int last = m % 10;

	if (m < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
