#include "main.h"

/**
 * set_bit - function that sets the value of a bit
 * to 1 at a given index.
 * @n: number to change
 * @index: bit index
 *
 * Return: 1 | -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
