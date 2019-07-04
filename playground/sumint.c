#include <stdio.h>

int SumInt(int a, int b);

int main(void)
{
    SumInt(3,4);
}

int SumInt(int a, int b)
{
    if ( a < b) {
        printf("a less than b\n");
    }
    return 0;
}