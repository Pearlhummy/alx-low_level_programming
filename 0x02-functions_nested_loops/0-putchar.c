#include "main.h"
/**
 * main - main function
 *
 * Return: end of the program
 */
int main(void)
{
	char string[8] = "-putchar";
	int n = 0;

	while (n < 8)
	{
		_putchar(string[n]);
		++n;
	}

	_putchar(10);
	return (0);
}
