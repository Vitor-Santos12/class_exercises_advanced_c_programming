#include <stdio.h>

void f(void)
{
    static int x = 0; // With static "x" is initializate once. 

    // x = 0; //When i initialize the variable non line the static, the "x" receve zero 
 
    printf("Value of x is %d\n", x);
    x++;
    printf("Value of x is %d\n", x);
}

int main()
{
    f();
    f();

    return (0);
}