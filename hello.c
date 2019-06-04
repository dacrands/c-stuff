#include <stdio.h>

void hello(void);
void helloName(char name[5]);

int main(void)
{
    hello();
    helloName("David");
}

// The first 'void' indicates the function
// returns 'void' and the second indicates the 
// function takes void, i.e., no args
void hello(void)
{
    printf("Hello \n");
}

void helloName(char name[5])
{
    printf("Hello, %s \n", name);
}