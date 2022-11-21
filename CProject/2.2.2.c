#include <stdio.h>

int main()
{
    int x;
    int year;

    scanf("%d %d", &x, &year);

    double monut = x;
    for (int i = 0; i < year; i++)
    {
        monut *= (1+0.033);
    }

    printf("%lf\n", monut);

    return 0;
}