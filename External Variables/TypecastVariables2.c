#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0;
    float aroot;

    printf("Type an interger: ");
    scanf("%d",&a);
    aroot = sqrt(abs(a)); // Include de abs() function to converte negative value in positive one 
    printf("The square root of %d is %f\n", a, aroot);

    return (0);
}