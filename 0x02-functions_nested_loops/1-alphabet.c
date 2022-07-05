#include "main.h"
/**
 * print_alphabet - print out the alphabet
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		++a;
	}

	_putchar(10);
}
