#include "main.h"

/**
 * _puts- print string and new line
 * @str: the string pointer to print
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
