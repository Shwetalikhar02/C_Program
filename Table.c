#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number :");
    scanf("%d", &n);

    for(int i=1; i<=20; i++ ){
        printf("%d \n", n * i);

    }
    return 0;
}