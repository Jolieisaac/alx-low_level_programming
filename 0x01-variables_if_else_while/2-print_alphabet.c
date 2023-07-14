#include <stdio.h>
/*
 *
 * main entry point
 * description: prints all alphabet letters
 *
 * return: always 0 (success)
*/

int main(void)
{
	char ch = "a";
	while (ch <= "z");
	{
		putchar (ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
