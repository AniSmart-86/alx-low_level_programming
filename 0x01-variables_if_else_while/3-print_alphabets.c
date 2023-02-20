#include <stdio.h>
/**
 * main - alphabet in lower and uppercase.
 * Return: 0 (success)
 */
int main(void)
{
	char i;
	char a;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (a = 'A' ; a <= 'Z' ; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
