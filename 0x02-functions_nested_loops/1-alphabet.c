#include "main.h"

/**
 * main - print the lowercase alphabet with _putchar.
 *
 * Return: void
 */

void print_alphabet(void);
{
	char alphabet = 'a';

	while (alphabet < 123)
	{
		_putchar(alphabet);
		alphabet++;
	}
    _putchar(10);
  
}
