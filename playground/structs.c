#include <stdio.h>

struct car {
    int cyl;
    char *make;
};

int main(void)
{
    struct car toyota;
    struct car *toyPtr;

    toyota.cyl = 6;
    toyota.make = "Toyota";
    
    toyPtr = &toyota;

    toyPtr -> make = "new";

    printf("%s\n", toyota.make);
    printf("%s\n", toyPtr -> make);

    return 0;
}