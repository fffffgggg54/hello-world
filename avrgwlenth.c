#include <stdio.h>
#define IN   1  /* inside a word */    
#define OUT  0	/* outside a word */
   /* count lines, words, and characters in input */ 
void main ()
{
  int wordCount, charCount, state, keyInput, currLen;
  state = OUT;
  wordCount = charCount = currLen = 0;
  while ((keyInput = getchar ()) != EOF)
    {
      if (keyInput == ' ' || keyInput == '\n' || keyInput == '\t')
      {
	state = OUT;
      }
      else if (state == OUT)
	{
	  state = IN;
          charCount = charCount + (currLen + 1);
          currLen = 0;
	  ++wordCount;
	}
       if(state == IN)
         {
            currLen++;
         }      
    }
  
  printf ("\n%d average\n", charCount / wordCount);
}


