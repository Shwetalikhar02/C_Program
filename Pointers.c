#include<stdio.h>
#include<math.h>
// int main(){
//     int i=3;
//     printf("Value of i:%d\n", i);
//     printf("Address of i :%d\n", &i);
//     printf("Value of i : %d\n", *(&i));
//     return 0;
// }

// int main(){
// int i=3, *j, **k;
// j = &i;
// k = &j;
// printf("Address of i:%u\n ", &i);
// printf("Address of i:%u\n ", j);
// printf("Address of i:%u\n ", *k);
// printf("Address of j:%u\n ", &j);
// printf("Address of j:%u\n ", k);
// printf("Address of k:%u\n ", &k);
// printf("Value of j : %u\n", j);
// printf("Value of k : %u\n", k);
// printf("Value of i : %d\n", i);
// printf("Value of i : %d\n",*(&i) );
// printf("Value of i : %d\n", *j);
// printf("Value of i : %d\n", **k);
// return 0;

// }



// void swapr(int *, int *);
// int main(){
//    int a = 10, b=20;
//    printf("a=%d b=%d\n", a , b);
//    swapr(&a, &b);
   
//     return 0;
// }
// void swapr(int *x, int *y){
// int t;
// t=*x;
// *x=*y;
// *y=t;
// printf("*x=%d *y=%d\n", *x, *y);
// }

// void areaPeri(int, float*, float*);

// int main(){
//     int radius;
//     float area, peri;
//     printf("Enter the radius :");
//     scanf("%d", &radius);
//     areaPeri(radius, &area, &peri);
//     printf("Area is :%f\n", area);
//     printf("Perimeter is : %f\n", peri);
//     return 0;
// }
// void areaPeri(int r, float *a, float*b){
//     *a = 3.14 * r * r;
//     *b = 2 * 3.14 * r;

// }


int fact(int x);
void main(){
    double x, ax, ss=0, sin_x=0, temp;
    int i, n, sign=-1;
    printf("Enter x:");
    scanf("%1f", &x);
    printf("Enter n:");
    scanf("%d", &n);
//Convert degree into radian
ax=x;
x = x*(3.14/180);
//functionality
for(i=1; i<=n; i+=2){
    sign = -sign;
    temp = sign*pow(x,i)/fact(i);
    sin_x = temp + sin_x;
}
printf("Sin(%.2f) Using Functionality: %1f", ax, sin_x);
//check with sin function
ss = sin(x);
printf("\nSin(%.2f) Using Math.h: %1f", ax, ss);


    
}
int fact(int n){
    int i, fact=1;
    for(i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}


