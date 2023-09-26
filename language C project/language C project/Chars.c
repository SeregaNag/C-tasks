#include <stdio.h>
//EOF = ctrl+z
void chars()
{
	printf("%d", EOF);
	int c;
	c = getchar();
	while (c != EOF) {
		putchar (c);
		c = getchar();
	} if (c == EOF) {
		printf("EOF == 1");
	}
}