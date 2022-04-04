#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit: prints the last digit of a number
 * @c: is the int that get passed as a parameter
 * Return: int.
 */

int print_last_digit(int c)
{

char number_string[10];
int last_digit_string;
char s;
sprintf(number_string, "%d", c);
s = number_string[strlen(number_string) - 1];
last_digit_string = s - '0';
_putchar(last_digit_string + '0');
return (last_digit_string);

}
