#include <stdio.h>
/**
 * main - main function
 *
 * Return: end of the program
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; --n)
	{
		putchar(n);
	}

	putchar(10);

	return (0);
}
