#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0;

    printf("Type an interger: ");
    scanf("%d",&a);

    printf("The number is %.1f\n", (float) a); // Just include de float to change the interger variable to float variable

    return (0);
}