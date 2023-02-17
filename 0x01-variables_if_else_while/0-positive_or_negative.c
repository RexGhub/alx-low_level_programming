#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that checks the staus of random generated numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is zero\n", n);

	return (0);
}
