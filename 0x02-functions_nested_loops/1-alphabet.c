#include "main.h"

/**
 * main -  prints the alphabet, in lowercase, followed by a new line. 
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet < 123)
	{
		_putchar(alphabet);
		alphabet++;
	}
_putchar(10);

}
