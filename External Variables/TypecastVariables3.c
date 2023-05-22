#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int r;

    srand((unsigned)time(NULL)); // Intializes random number generator 
    r = rand();
    printf("%d is a random number .\n", r);

    return(0);
}