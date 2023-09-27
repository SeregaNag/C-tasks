#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXWORDS 80

void gistogram_vert()
{
    int i, j, c, state; 
    int lenword[MAXWORDS], nextword, maxlen;

    nextword = maxlen = 0;

    for (i = 0; i < MAXWORDS; ++i)
        lenword[i] = 0;
    state = OUT;

    while ((c = getchar()) != EOF && nextword < MAXWORDS) {
        if (c == ' ' || c == '\n' || c == '\t') {    
            if (state == IN) {                        
                if (lenword[nextword] > maxlen)    
                    maxlen = lenword[nextword]; 
                ++nextword;
                state = OUT;
            }               
        }                                            
        else {                                       
            if (state == OUT)                        
                state = IN;                          
            ++lenword[nextword];                
        }    
    }      
    for (j = maxlen; j > 0; --j) {    
        for (i = 0; i < nextword; ++i) { 
            if (lenword[i] >= j)       
                putchar('#');          
            else                       
                putchar(' ');      
        }                  
        putchar('\n');               
    }
}