#include <stdio.h>
#include <ctype.h>
/**
 * min - progrsm to print alphabet letter in reverse
 *
 * return: return 0
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
