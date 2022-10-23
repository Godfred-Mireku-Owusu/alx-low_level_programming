#include "main.h"


/**
 * _isdigit - checks for digits and alphabets
 * @c: The character to be checked
 *
 * Return: 1 if digit, 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= 'A' && c <= 'Z'){
if (c >= 'a' && c <= 'z')
return (0);
}
else
return (1);
}
