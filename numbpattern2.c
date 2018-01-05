#include <stdio.h>
int main()
/*Write a C program to print the given box number pattern
with 1's and 0's using loop.*/
{

int a, b, c, d;

printf("Input rows: ");
scanf("%d", &a);
printf("Input columns: ");
scanf("%d", &b);

for(c = 1; c <= a; c++)
    {
        for(d = 1; d <= b; d++)
        {
            if(c == 1 || c == a || d == 1 || d == b)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
return(0);
}