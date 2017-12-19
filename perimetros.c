#include <stdio.h>

int main()
{
    int mikos = 1;
    int platos = 2;   
    int perimetros;
    printf("Dwse plevres: \n");
    printf("Mikos: \n");   
    scanf("%d", &mikos);
    printf("Platos: \n");
    scanf("%d", &platos);
    perimetros = 2*(mikos + platos);
    printf( "I perimetros einai: %d" , perimetros);

    return(0);
    
}