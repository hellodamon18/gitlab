#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);

    int sign;
    if (x == 0) {
        sign = 0;
    } else {
        sign =  x / abs(x);
    }    

    switch (sign)
    {
        case -1 :
            printf("-1\n");
            break;
        case 0 :
            printf("0\n");
            break;        
        default:
            printf("%d\n", 2*x);
            break;
    }

    return 0;
}