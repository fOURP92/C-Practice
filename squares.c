    #include <stdio.h>

    int main()
{   

    int n, n1;
        printf("Input an integer: ");
        scanf("%d", &n);
        printf("List of square of each one of the even values from 1 to a %d :\n",n);
    for ( n1 = 1; n1 <= n; n1++ ) {
    if (( n1%2) ==0 ) {
        printf("%d^2 = %d\n", n1, n1*n1);
        }
    }
    return (0);
}