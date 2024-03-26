// ChatGPT/Copilot generated code to caluclate the number of days
// between two dates. Used to tell me the number of days until the holidays.

// I'm not sure how well it works. But it did seem to work correctly
// based on the testing i've done.

#include <stdio.h>

typedef struct date {
    int day;
    int month;
    int year;
} date;

date today = { 26, 3, 2024 };
date holidays = { 14, 6, 2024 };


int calculateDaysBetweenDates(date date1, date date2)
{
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int days = 0;
    days += (date2.year - date1.year) * 365;

    // Adjust for leap years
    for (int year = date1.year; year < date2.year; year++)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            days++;
        }
    }

    // Adjust for months
    for (int month = date1.month; month < date2.month; month++)
    {
        days += daysInMonth[month - 1];
    }

    days += (date2.day - date1.day);
    return days;
}

int main(void)
{
    printf("There are %i days until the holidays\n", calculateDaysBetweenDates(today, holidays));
    return 0;
}

