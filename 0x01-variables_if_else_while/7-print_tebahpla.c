#include <stdio.h>

/** 
 * main -  prints the lowercase alphabet in reverse
 *
 * return: always 0 (success)
 */

int main(void)
{
	char letter;
	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	printf('\n');

	return (0);
}
