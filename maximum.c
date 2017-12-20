#include <stdio.h>

int main()
{
    double first, second, third;
    
    printf("Give the first number: ");
    scanf("%lf", &first);
    printf("Give the second number: ");
    scanf("%lf", &second);
    printf("Give the third number: ");
    scanf("%lf", &third);
   
        if ( first >= second && first>= third ) 
        printf("The biggest number is: %.01lf", first);
    
        if ( second >= first && second >= third )
        printf("The biggest number is: %.01lf", second);

        if (third >= first && third >= second)
        printf("The biggest number is: %.1lf", third);
    
     return (0);
    }