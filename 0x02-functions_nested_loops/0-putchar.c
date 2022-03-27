//#include <stdio.h>
#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: 0.
 */
int main(void)
{
int i;
char str[8] = "_putchar";
for (i = 0; i < 8; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}
