#include<stdio.h>
#include<math.h>

/// GREATER THAN 9 AND SMALLER THAN 100
int main()
{
    int x;
    printf("Enter number:");
    scanf("%d", &x);
    printf("%d\n", x>9 && x<100);

    return 0;

}