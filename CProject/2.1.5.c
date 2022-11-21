#include <stdio.h>

int main()
{
    int amount = 0;
    int price = 0;

    printf("Please input price total: ");
    scanf("%d %d", &price, &amount);

    int change = amount - price;
    printf("The remain is: %d\n", change);
    
    return 0;
}

// int main()
// {
//     int amount = 0;
//     int price = 0;

//     printf("Please input price: ");
//     scanf("%d", &price);

//     printf("Please input total: ");
//     scanf("%d", &amount);

//     int change = amount - price;
//     printf("The remain is: %d\n", change);
    
//     return 0;
// }

