#include <stdio.h>

/**
 * main - A program that checks the staus of random generated numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 8; num1++)
	{
		for (num2 = 1; num2 <= 9; num2++)
		{
			if (num2 > num1)
			{
				putchar('0' + num1);
				putchar('0' + num2);

				if (num1 != 8 || num2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
