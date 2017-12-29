/*Write a C program that takes hours and minutes as input,
and calculates the total number of minutes.*/
#include <stdio.h>
int main()

{
    int x, y, z, mins, sum;

    printf("Input hours: ");
    scanf("%d", &x);
    printf("Input minutes: ");
    scanf("%d", &y);
    mins = x * 60;
    sum = mins + y;
    printf("Total: %d minutes", sum );
}