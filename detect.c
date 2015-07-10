#include <stdio.h>
   /* copy input to output; 2nd version  */ main ()
{
  int c, i;
  i = 0;
  while ((c = getchar ()) != EOF)
  {
    if(c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' ||c == '8' || c == '9')
   {
      i++;
   }
  }
    printf("\n%d \n", i);    
}
