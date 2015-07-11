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
          charCount = charCount + currLen;
          currLen = 0;
	  ++wordCount;
	  printf("[Debug] keyInput=0x%x, state transition from OUT to IN, wordCount=%d, charCount=%d, currLen=%d\n", keyInput, wordCount, charCount, currLen);		
	}
       if(state == IN)
         {
            currLen++;
	    printf("[Debug] keyInput=0x%x, state still IN or from OUT to IN, wordCount=%d, charCount=%d, currLen=%d\n", keyInput, wordCount, charCount, currLen);		
         }      
    }

  printf("[Debug] End of while. State is %s, wordCount=%d, charCount=%d, currLen=%d\n", state == IN ? "IN" : "OUT", wordCount, charCount, currLen);		

  charCount = charCount + currLen;   
  printf("[Debug] After final add. State is %s, wordCount=%d, charCount=%d, currLen=%d\n", state == IN ? "IN" : "OUT", wordCount, charCount, currLen);		
  printf ("\n%d average\n", charCount / wordCount);
}


