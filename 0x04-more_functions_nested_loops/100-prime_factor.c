#include <stdio.h>
#include <stdlib.h>
int main(void)
{
unsigned long int n = 612852475143;
unsigned long int i;
for (i = 2; i <= n; i++)
{
while (n % i == 0)
{
n = n / i;
}

printf("%lu\n", n);
return (0);
}
