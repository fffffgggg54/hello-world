#include <stdio.h>
   /* copy input to output; 2nd version  */ main ()
{
  int c, zero, one;
  zero = one = 0;
  while ((c = getchar ()) != EOF)
  {
    if(c == '0')
    {  
        zero = zero + 1;
    }
    if(c == '1')
    {
        one = one + 1;
    }
  }
    printf("\n%d zeros\t %d ones \t %d total\n", zero, one, zero + one);    
}
