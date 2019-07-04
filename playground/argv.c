#include <stdio.h>

int main(int argc, char* argv[]) 
{
    int n = 0;
    do {    
        printf("%s\n", argv[n]);
        n++;
    } while (argv[n] != NULL);
}