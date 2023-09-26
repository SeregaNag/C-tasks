#include <stdio.h>

void copy_without_tabs() {
	int c, x;
	while ((c = getchar()) != EOF) {
		x = 0;
		if (c == '\t') {
			printf("\\t");
			x = 1;
			}
		if (c == '\b') {
			printf("\\b");
			x = 1;
		}
		if (c == '\\') {
			printf("\\\\");
			x = 1;
		}
		if (x != 1)
			putchar(c);
		}
	}