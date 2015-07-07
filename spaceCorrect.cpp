#include <stdio.h>
char prevChar;
char curChar;
int c;
int oldc;
int main()
{
  while ((c = getchar()) != EOF)  
 {
  if(c != ' '||oldc !=' ')   
  putchar(c);
  oldc = c;
 }
}
