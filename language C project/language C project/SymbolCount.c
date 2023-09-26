#include <stdio.h>

void symbol_count()
{
	int c, nl, ns, nt;
	nl = ns = nt = 0;
	while ((c = getchar()) != EOF)
		if (c == ' ')
			++ns;

		else if (c == '\t')
			++nt;

		else if (c == '\n')
			++nl;
		printf("Strings: %d\nSpaces: %d\nTabs: %d\n", nl, ns, nt);
}