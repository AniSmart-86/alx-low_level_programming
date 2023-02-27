#include "main.h"
/**
 * swap_int - swaps the value of two integers
 *
 * @a: input 1
 * @b: input 2
 *
 * return: a and b
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
