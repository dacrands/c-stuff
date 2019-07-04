#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* x;
    int* y;

    x = malloc(sizeof(int));
    y = malloc(sizeof(int));

    *x = 1;
    *y = 2;
    x=y;

    printf("Value of x is: %d \n", *x);

};