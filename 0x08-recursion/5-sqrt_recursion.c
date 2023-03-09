#include "main.h"

/**
 * number - helps find the sqrt of natural sqrt numbers
 *
 * @n: natural number starting from 1
 * @root: sqrt of number to be found
 *
 * Return: square of root answers
 */
int number(int n, int root)
{
	if (n * n == root)
		return (n);
	if (n == root)
		return (-1);
	return (1 * number(n + 1, root));
}







/**
 * _sqrt_recursion - return natural square root of a number
 *
 * @n: number which root will be found
 *
 * Return: natural root of n
 * if it does not have natural root, return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}
