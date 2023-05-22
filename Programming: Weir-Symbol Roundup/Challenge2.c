# include <stdio.h>

int main()
{
    int number;
    char *classification;

    printf("Type a number bigger than zero: ");
    scanf("%d", &number);

    number %= 2;
    printf("%d\n", number);
    classification = (number == 0) ? "Odd" : "Even";
    printf("This number is %s. \n", classification);

    return (0);

}