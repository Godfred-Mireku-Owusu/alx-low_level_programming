#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Description: prints all possible combinations of single-digit numbers
*
* Return: 0 (Success)
*/
int main(void)
{
int x;

for (x = 48; x <= 57; x++)
{
putchar(x);
while (x < 57)
{
putchar(44);
break;
}
putchar(' ');
}
return (0);
}
