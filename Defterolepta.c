#include <stdio.h>

int main()
{
   int defterolepta = 10000 ;
   
  int hours = defterolepta / 3600 ;
  int minutes = (defterolepta - hours*3600) / 60 ;
  int seconds = defterolepta - (hours*3600 + minutes*60) ;
  
   printf (" %d %d %d ", hours, minutes, seconds ) ;
 //ti kserw apo zwi
   return 0;
}