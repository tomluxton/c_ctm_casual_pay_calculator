#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float BASE = 26.93;

    float week_hours;
    float sat_hours;
    float sun_hours;
    float sat_meals;
    float sun_meals;
    float week_meals;
    float pay;

    printf("How many hours did you work on Saturday? (including all breaks)\n");
    scanf("%f", &sat_hours);
    printf("How many hours did you work on Sunday? (including all breaks)\n");
    scanf("%f", &sun_hours);

    printf("How many hours did you work on Weekdays (including allbreaks)?\n");
    scanf("%f", &week_hours);

    if (sat_hours >= 5) {
        sat_meals = 1;
    } else {
        sat_meals = 0;
    }

    if (sun_hours >= 5) {
        sun_meals = 1;
    } else {
        sun_meals = 0;
    }

    if (week_hours >= 5) {
        printf("How many Weekday shifts were 5 or more hours \n(How many unpaid 30mins did you take)?\n");
        scanf("%f", &week_meals);
    } else {
        week_hours = 0;
    }

    pay = ((sat_hours - (sat_meals * 0.5)) * 1.25 + (sun_hours - (sun_meals * 0.5)) * 1.5 + week_hours - week_meals * 0.5) * BASE;

    printf("Your pay for the week is: $%f\n", pay);
    return 0;
}
