#include <stdio.h>

// int main()
// {
//     int hour1, hour2;
//     int minute1, minute2;

//     scanf("%d %d", &hour1, &minute1);
//     scanf("%d %d", &hour2, &minute2);

//     if (hour1 > hour2) 
//     {
//         printf("case1: %d %d\n", hour1, hour2);
//         if (minute1 > minute2) {
//             printf("%d %d\n", hour1-hour2, minute1-minute2);
//         } else {
//             printf("%d %d\n", hour1-hour2-1, minute1+60-minute2);
//         }
//     } 
//     else if (hour1 < hour2)
//     {
//         printf("case2: %d %d\n", hour1, hour2);
//         if (minute1 > minute2) {
//             printf("%d %d\n", hour2-hour1-1, minute2+60-minute1);
//         } else {
//             printf("%d %d\n", hour2-hour1, minute2-minute1);
//         }       
//     } 
//     else 
//     {
//         // printf("case3: %d %d\n", hour1, hour2);        
//         if (minute1 > minute2) {
//             printf("%d %d\n", hour2-hour1, minute1-minute2);
//         } else {
//             printf("%d %d\n", hour2-hour1, minute2-minute1);
//         } 
//     }

//     return 0;
// }

#include <stdlib.h>
int main()
{
    int hour1, hour2;
    int minute1, minute2;

    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);

    int t1 = hour1*60 + minute1;
    int t2 = hour2*60 + minute2;

    // if (t1 > t2) 
    {
        printf("The time diff is: %d %d\n", abs(t1-t2)/60, abs(t1-t2)%60);
    }
    // else
    // {
    //     printf("The time diff is: %d %d\n", (t2-t1)/60, (t2-t1)%60);

    // }
}