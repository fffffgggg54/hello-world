#include <stdio.h>
#define IN   1  /* inside a word */    
#define OUT  0	/* outside a word */
   /* count lines, words, and characters in input */ 
void main ()
{
  int keyInput, lineCount, wordCount, charCount, state, maxLen, currLen;
  state = OUT;
  lineCount = wordCount = charCount = maxLen = currLen = 0;
  while ((keyInput = getchar ()) != EOF)
    {
      ++charCount;
      if (keyInput == '\n')
	++lineCount;
        if(maxLen >= currLen)
        {
                 maxLen = currLen;
        }
      if (keyInput == ' ' || keyInput == '\n' || keyInput == '\t')
      {
	state = OUT;
      }
      else if (state == OUT)
	{
	  state = IN;
          maxLen = currLen;
          currLen = 0;
	  ++wordCount;
	}
       if(state == IN)
         {
            currLen++;
         }
       
    }
  if(maxLen >= currLen)
  {
    maxLen = currLen;
  }
  if(wordCount == 1 && maxLen == 0)
  {
    if(state == OUT)
    {
      maxLen = charCount - 1;
    }
    else if(state == IN)
    {
      maxLen = charCount;
    }
  }
  printf ("\n%d lines  %d words %d characters %d shortest word\n", lineCount, wordCount, charCount, maxLen);
}

