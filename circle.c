#include<stdio.h>
int main()
{
    int radius, area;
    float cir;
    printf("Enter radius");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    printf("Area is : %d\n", area);
    cir = 2 * 3.14 * radius;
    printf("Circumference is %f\n", cir);
    return 0;
}