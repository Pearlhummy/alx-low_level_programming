#include <stdio.h>
/**
 * main - main function
 *
 * Return: end of the program
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; ++n)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
