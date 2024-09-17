#include<stdio.h>
int main()
{
    int side, area, pm;
    printf("Enter side");
    scanf("%d", &side);
    area = side*side;
    printf("Area is : %d", area );
    pm= side+side;
    printf("Perimeter is %d", pm);
    return 0;
}