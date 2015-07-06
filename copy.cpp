#include <stdio.h>  
main()    
{      
 int c;
 while (1)
 {
  int g = (c = getchar()) != EOF;
  printf("g=%d\n", g);

  if (g != 1) break;

  putchar(c);
 }
} 
