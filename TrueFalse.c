#include<stdio.h>
int main()
{
    int isMonday = 1;
    int isRaining = 0;
    printf("%d \n", isMonday || isRaining);
    printf(" %d \n ", isMonday && isRaining);

    int isSunday = 1;
    int isSnowing = 0;
    printf("%d \n ", isSunday && isSnowing);
    printf("%d \n", isSunday || isSnowing);

    int isSummer = 1;
    int isRain = 0;
    printf("%d\n", isSummer || isRaining);
    printf("%d\n", isSummer && isRaining);
    return 0;
}