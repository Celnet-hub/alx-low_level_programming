#include <stdio.h>
/**
 * Write a program that computes and prints the sum of all the
 * multiples of 3 or 5 below 1024 (excluded), followed by a new line.
 * 
 * main - increasing and decreasing until 98
 *
 * Return: Always 0.
 */

int main(void)
{
int i, result; /*Delcaring statements*/

i = 0;
result = 0;

while (i < 1024)
{
if (i % 3 == 0 || i % 5 == 0) /*Start condition IF*/
result += i;
i++;
} 

printf("%d\n", result);
return (0);
}
