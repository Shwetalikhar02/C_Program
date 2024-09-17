#include<stdio.h>

int main()
{
    int a, b, pm, area;
    printf("Enter the values of a, b :");
    scanf("%d %d", &a, &b);
    pm = a + b;
    printf("Perimeter is %d\n", pm); // PERIMETER OF TRIANGLE
    area = 0.5 * a * b;
    printf(" Area is : %d\n", area);// AREA OF TRIANGLE

    return 0;
}