#include <stdio.h>
#include <stdlib.h>

int main(){
    // All pointers start out as "bad" since they don't yet have a pointee.
    int*    x;
    int*    y;
    int xref;

    /*
        This is where the pointer creates an empty pointee in mem
        We use `malloc` since this is in the heap, which we manage ourselves.
    */
    x = malloc(sizeof(int));

    /*
        Fill the pointee box, so to speak, with the int 24.
        Doing this before doing the procedure above will result in bad times.
    */
    *x = 24;

    /*
        When we assign pointers to each other, we are really just telling
        one pointer to point to the other pointer's pointee. Make sense?
    */
    y = x;

    // When we print xref it will print 48 because x and y share the same pointee
    *y = 48;
    xref = *x;

    printf("The pointer x has value %d \n", xref);
    return 0;
}