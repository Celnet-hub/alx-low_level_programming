#include "main.h"

/**
 * print_sign - function that prints signs based on the value of n
 * @n: is the int parameter passed to the function
 * Return: 1 if n > 0
 *         0 if n == 0
 *         -1 if n < 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}


}
