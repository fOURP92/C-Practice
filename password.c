#include <stdio.h>

int main()
{
    int pwd;
    int a;
    
    //correct pwd is 1234.
    pwd = 1234;
    printf("Enter password: ");
    scanf("%d", &a);   
           while ( a == pwd ) {
            printf(" Access granted!"); break;
           }
           while ( a != pwd){
               printf("Wrong password, try again: ");
               scanf("%d", &a);
               if( a == pwd ) {
            printf(" Access granted!");
           }
           }
      return (0);
}