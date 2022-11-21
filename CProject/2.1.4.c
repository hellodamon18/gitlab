#include <stdio.h>

int main()
{
    int price = 0;

    printf("Please input price: ");
    scanf("%d", &price);

    int change = 100 - price;
    printf("The remain is: %d\n", change);
    
    return 0;
}