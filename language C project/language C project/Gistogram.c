#include <stdio.h>

#define IN 1
#define OUT 0

void gistogram_horiz()
{
    int c, state;
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\n' && c != '\t')
        {
            state = IN;
            putchar('-');
        }
        else if (state == IN)
        {
            state = OUT;
            putchar('\n');
        }
    }
}