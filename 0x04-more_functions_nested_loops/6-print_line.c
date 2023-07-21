#include <main.h>

/**
 * main - draws a straight line in the terminal
 *
 * @n = number of times
 * return void
 */


void print_line(int n)
{
	int i;
	int n;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
