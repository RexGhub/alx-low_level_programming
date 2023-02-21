#include "main.h"

/**
 * main - Check code here
 *
 * Return: 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - print all alphabets in lowercase
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
