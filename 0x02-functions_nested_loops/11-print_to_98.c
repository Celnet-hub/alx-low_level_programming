#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 -function that prints all natural number from n to 98
 * @n: is the int that is passed as a parameter
 * Return: Nothing
 */

void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
printf("%d", 98);
}
else if (n > 98)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
printf("%d\n", 98);
}
else
{
printf("%d", n);
}
printf("\n");
}
