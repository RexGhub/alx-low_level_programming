#include <stdio.h>

/**
 * main - A program that checks the staus of random generated numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}

	putchar('\n');

	return (0);
}
