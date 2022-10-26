#include "main.h"

/**
 * print_number - print out integers
 * @n: integers to print
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -n;
	}

	if ((i / 10) > 0)
		print_number(i / 10);

	_putchar((i % 10) + '0');
}
