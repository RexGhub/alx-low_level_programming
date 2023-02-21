#include "main.h"

/**
 * main - Check code here
 *
 * Return: 0 (Success)
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - print all alphabets in lowercase
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
