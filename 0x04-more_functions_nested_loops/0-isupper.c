/**
 * @file 0-isupper.c
 * @author your name (you@domain.com)
 * @brief a function that returns 1 if the character is uppercase, 0 otherwise
 * @version 0.1
 * @date 2022-03-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 * 
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}

int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return(0);
}