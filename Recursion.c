#include<stdio.h>

int rec(int );
int main(){
    int a, fact;
    printf("Enter a number:");
    scanf("%d", &a);
    fact = rec(a);
    printf("Factorial of %d is %d", a, fact);
    return 0;
}
int rec(int x){
    int f;

    if(x==1)
    return(1);
    else
    f=x*rec(x-1);
    return (f);
}