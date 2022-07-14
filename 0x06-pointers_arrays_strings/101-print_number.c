#include "main.h"
/**
 * print_number - The function
 *
 * @n: The parameter
 */
void print_number(int n)
{
	if(i/10!=0)
	{
		putchar(i%10);
		printnumber((i-i%10)/10);
	}
	else if((i/10==0) && (i%10!=0) && (i>0))
		putchar(i%10);
	else if((i/10==0) && (i%10!=0) && (i<=0))
		putchar(-i%10);
}
