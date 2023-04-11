#include "main.h"

/**
 * get_endianness - A  function that checks the endianness.
 * Return: *c pointer
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
