#include <stdio.h>
#include "main.h"
#include "3-print_remaining_days.c"
#include "3-convert_day.c"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
int month;
int day;
int year;

month = 3;
day = 2;
year = 2000;

printf("Date: %02d/%02d/%04d\n", month, day, year);
//%02d/%02d/%04d - two digits max for month, day, respectively and four digits max for year.

day = convert_day(month, day);

print_remaining_days(month, day, year);

return (0);
}

