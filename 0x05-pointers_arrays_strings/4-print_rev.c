#include "main.h"

/**
 * print_rev - print a string in reverse with a new line
 * @s: the string that reference the pointer
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n])
		n++;
	while (n--)
		_putchar(s[n]);
	_putchar('\n');
}
