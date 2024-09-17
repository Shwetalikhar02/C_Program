#include<stdio.h>

int main(){
    // int marks[3];
    // printf("Enter physics marks:");
    // scanf("%d", &marks[0]);
    // printf("Enter maths marks:");
    // scanf("%d", &marks[1]);
    // printf("Enter chemistry marks:");
    // scanf("%d", &marks[2]);
    // printf("phy=%d maths=%d chemistry=%d", marks[0], marks[1], marks[2]);

//  float price[3];
// printf("Enter prices of 3 items:");
// scanf("%f %f %f", &price[0], &price[1], &price[2]);
// printf("Total price 1:%f\n", price[0]+(0.18*price[0]));
// printf("Total price 2: %f\n", price[1]+(0.18*price[1]) );
// printf("Total price 2: %f\n", price[2]+(0.18*price[2]));

int avg, sum=0;
int i;
int marks[30];
for(i=0; i<=29; i++){
    printf("Enter marks:");
    scanf("%d", &marks[i]);
}
for(i=0; i<=29; i++){
    sum= sum + marks[i];
}
 avg = sum/30;
 printf("Average marks = %d\n", avg);   

// int num[40], i;
// for(i=0; i<=100; i++)
// num[i]=i;

    return 0;
}