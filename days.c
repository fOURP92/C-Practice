#include <stdio.h>

    int main()
    {
        int meres;
        int years;
        int weeks;
        int days;

        printf("Number of days: ");
        scanf("%d", &meres);
        years = meres / 365 ;
        weeks = (meres - years*365) / 7;
        days = (meres) - (years*365 + weeks*7);
        printf("Years : %d \nWeeks : %d \nDays : %d \n ",years, weeks, days);

        return(0);
    }