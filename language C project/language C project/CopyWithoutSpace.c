#include <stdio.h>

void copy_without_space() {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar(c);
			while ((c = getchar()) == ' ') {
				putchar(0);
			}
		}
		putchar(c);
	}
}