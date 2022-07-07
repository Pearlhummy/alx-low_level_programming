#include "main.h"
#include <stdio.h>
/**
 * _isdigit - function that checks for a digit (0 through 9)
 *
 * @c: function parameter
 *
 * Return: returns 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
