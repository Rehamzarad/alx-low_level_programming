#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: void
*/
void print_number(int n)
{
int i, j;
int num[10];
if (n < 0)
{
_putchar('-');
n = -n;
}
for (i = 0; n > 0; i++)
{
num[i] = n % 10;
n = n / 10;
}
for (j = i - 1; j >= 0; j--)
{
_putchar(num[j] + '0');
}
}

