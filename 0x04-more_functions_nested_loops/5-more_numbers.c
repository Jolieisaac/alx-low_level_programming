#include "main.h"

/**
 * main - more_numbers
 * discreption: prints numbers from 1 to 14 in ten rows 
 * Return: void
 */

void more_numbers(void)
{

int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
			_putchar('\n');
		}
}
