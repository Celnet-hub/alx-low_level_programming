#include "main.h"


void print_alphabet_x10(void)
{
int c;
char low_case;
for ( c = 0; c < 10; c++)
{
for(low_case = 'a'; low_case <= 'z'; low_case++)
{
_putchar(low_case);
}
_putchar('\n');
}

}