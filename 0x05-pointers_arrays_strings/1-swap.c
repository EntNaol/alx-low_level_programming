#include "main.h"

/**
 *swap_int - swaps the values of m and n
 *@m: pointer 1
 *@n: pointer 2
 *Return; 0
 **/

void swap_int(int *m, int *n)
{
	*m += *n;
	*n = *m - *n;
	*m =	*m	-	*n;
}

