#include "main.h"

/**
 * @brief function that checks for lowercase letters
 * @param c is the character to be checked
 * @return 1 if c is a lowercase letter, 0 otherwise
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);

}

}

