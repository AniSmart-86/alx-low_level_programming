#include "main.h"
/**
 * factorial - print the factorial of a given number
 *
 * @n: number of factorial
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
