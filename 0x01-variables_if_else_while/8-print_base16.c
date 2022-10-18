#include <stdio.h>
#include <stdlib.h>
/**
* main - tebahpla
*
* Description: prints all the numbers in lowercase, followed by a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
int x;
for (x = 48; x <= 57; x++)
putchar(x);
for (x = 'a'; x <= 'f'; x++)
putchar(x);
putchar('\n');
return (0);
}
