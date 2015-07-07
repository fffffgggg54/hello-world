#include <stdio.h>  
main()    
{       
 int c, ca, nl;  
 nl = 0;
 ca = nl;        
 while ((c = getchar()) != EOF)  
 {
  if (c == '\n')
  {               
    ++nl;
  }
  if(nl != ca)
  {       
   printf("%d\n", nl);
   ca++;
   nl = ca;   
  }
 }
} 
