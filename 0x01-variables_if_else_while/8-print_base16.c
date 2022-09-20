#include <stdio.h>
/**
 * main - main function
 *
 * Return: end of the program
 */
int main(void)
{
	int a;
	char b;

	for (a = '0'; a <= '9'; ++a)
	{
		putchar(a);
	}

	for (b = 'a'; b <= 'f'; ++b)
	{
		putchar(b);
	}

	putchar(10);
	return (0);
}
