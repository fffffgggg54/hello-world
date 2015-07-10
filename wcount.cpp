#include <stdio.h>
#define IN   1			/* inside a word */
#define OUT  0			/* outside a word */
   /* count lines, words, and characters in input */
int main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
	++nc;
	if (c == '\n')
	    ++nl;
	if (c == ' ' || c == '\n' || c == '\t') {
	    if (state == IN) {
		printf("\n");
	    }
	    state = OUT;
	} else if (state == OUT) {
	    state = IN;
	    
	}
	if (state == IN) {
	    printf("%c", c);
	}
    }
}
