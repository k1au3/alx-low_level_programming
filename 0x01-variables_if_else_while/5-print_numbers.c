#include <stdio.h>
#include <ctype.h>
/**
 * main - program to print all single digits of base 10
 *
 * Return: returns 0
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
	
