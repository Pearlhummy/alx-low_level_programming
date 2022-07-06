#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @n: parameter of function
 *
 * Return: Returns the last digit of a number
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
	{
		_putchar(-d + '0');
		return (-d);
	}
	else
	{
		_putchar(d + '0');
		return (d);
	}
}
