#include <stdio.h>
#define IN   1			/* inside a word */
#define OUT  0			/* outside a word */
   /* count lines, words, and characters in input */
main()
{
    int c, nl, nw, nc, state, cu, cua;
    cu = cua = 0;
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
	    ++nw;

	}
	if (state == IN) {
	    printf("%c", c);
	}

    }
    printf("%d lines %d words %d charactars \n", nl, nw, nc);
}
