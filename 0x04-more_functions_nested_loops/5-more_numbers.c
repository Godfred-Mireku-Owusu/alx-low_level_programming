#include "main.h"

/**
 more_numbers -  prints 10 times the numbers, from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
int num, counter;

for (num = 0; num <= 9; num++)
{
for (counter = 0; counter <= 40; counter++)
{
if (counter > 9)
_putchar((counter / 10) + '0');
_putchar((counter / 10) + '0');
}
_putchar('\n');
}
}
