#include <stdio.h>

/**
 * main - entry point
 *
 * Description: it prints ordered alphabet in lowercase then in uppercases
 *
 * return 0 (success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*prints A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
