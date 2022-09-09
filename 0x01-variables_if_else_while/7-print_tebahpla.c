#include <stdio.h>
#include <ctype.h>
/**
 * main - program to print alphabet letter in reverse
 *
 * Return: return 0
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
