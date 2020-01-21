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

    printf("How many hours did you work on Saturday? (including breaks)\n");
    scanf("%f", &sat_hours);
    printf("How many hours did you work on Sunday? (including breaks)\n");
    scanf("%f", &sun_hours);

    printf("How many hours did you work on Weekdays \n(including paid and unpaid breaks)?\n");
    scanf("%f", &week_hours);

    if (sat_hours != 0) {
        printf("How many Saturday shifts were over 5 hours \n(How many unpaid 30mins did you take)?\n");
        scanf("%f", &sat_meals);
    } else {
        sat_meals = 0;
    }

    if (sun_hours != 0) {
        printf("How many Sunday shifts were over 5 hours \n(How many unpaid 30mins did you take)?\n");
        scanf("%f", &sun_meals);
    } else {
        sun_meals = 0;
    }

    if (week_hours != 0) {
        printf("How many Weekday shifts were over 5 hours \n(How many unpaid 30mins did you take)?\n");
        scanf("%f", &week_meals);
    } else {
        week_hours = 0;
    }

    pay = ((sat_hours - (sat_meals * 0.5)) * 1.25 + (sun_hours - (sun_meals * 0.5)) * 1.5 + week_hours - week_meals * 0.5) * BASE;

    printf("Your pay for the week is:%f\n", pay);
    return 0;
}
