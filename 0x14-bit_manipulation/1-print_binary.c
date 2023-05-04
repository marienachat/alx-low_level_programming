#include "main.h"

/**
* print_binary - prints the binary equivalent of a decimal number
* @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
int i, p = 0;
unsigned long int j;
for (i = 63; i >= 0; i--)
{
j = n >> i;
if (j & 1)
{
_putchar('1');
p++;
}
else if (p)
_putchar('0');
}
if (!p)
_putchar('0');
}
