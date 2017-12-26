#include <stdio.h>
int main()

{

float A[5];
int x;

for(x=0; x<5; x++)
    {
    printf("\nInput the %d number of the array: ", x+1);
    scanf("%f", &A[x]);
    }
for(x=0; x<5; x++)
    {
    if(A[x] < 10){
    printf("A[%d] = %.1f\n", x, A[x]);
                 }
    }
return (0);
}