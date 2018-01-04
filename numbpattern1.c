#include <stdio.h>
int main()

{
    /*Write a C program to print the given number pattern of 1's and 0's
    at alternate rows using loop. For all odd rows 1 is printed and for even rows 0 is printed.*/
int a, b, x, y;

printf("Input rows: ");
scanf("%d", &x);
printf("Input columns: ");
scanf("%d", &y);

for(a = 1; a <= x; a++)
 {
    for(b = 1; b <= y; b++)
    {
        if(a%2 == 0)
        {
            printf("0");
        }
        else 
        {
            printf("1");
        }
    }
    printf("\n");
 }
}