#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet,
 * in lowecase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char leta = 'a';

	while (leta <= 'z')
	{
		_putchar(leta);
		leta++;
	}
	_putchar('\n');
}
