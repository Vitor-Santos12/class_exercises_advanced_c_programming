#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *m;
    /* Initial memory Allocation*/
    m = (int *) malloc(16* sizeof(int));
    if (m == NULL)
       puts("Failed to allocate memory");
    else
       puts("Estorage for 16 integers allocated");

    return(0);
}