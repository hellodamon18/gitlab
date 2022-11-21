#include <stdio.h>

int main()
{
    double foot = 0;
    double inch = 0;

    printf("Please input foot inch: ");
    scanf("%lf %lf", &foot, &inch);

    printf("The height is: %f\n", (foot + inch/12)*0.3048);

    return 0;
}