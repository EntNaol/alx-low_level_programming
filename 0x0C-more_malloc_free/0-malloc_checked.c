#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocated memory using malloc.
 * @b: number of bytes to allocated.
 *
 * Return: a pointer the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *checker = malloc(b);

	if (checker == NULL)
		exit(98);

	return (checker);
}
