#include "main.h"

int find_sqrt(int i, int j);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @i: The number to find the square root of.
 * @j: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int find_sqrt(int i, int j)
{
	if ((j * j) == i)
		return (j);

	if (j == i / 2)
		return (-1);

	return (find_sqrt(i, j + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	int j = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, j));
}
