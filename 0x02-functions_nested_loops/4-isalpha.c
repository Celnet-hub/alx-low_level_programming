#include "main.h"

/**
 * _isalpha - is a function that checks for lowercase and uppercase letters
 * @c: the int to be checked
 * Return: Returns 1 if c is a lowercase or uppercase letter, 0 if otherwise
 *
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}

}
