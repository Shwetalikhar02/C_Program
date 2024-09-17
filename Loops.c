#include<stdio.h>
#include<math.h>
int main(){      ////FOR LOOP
    // for(int i=1; i<=20; i++){
    //     printf("Hello World\n");
    // }

    // for(int i=1; i<=100; i++){
    //     printf("%d\n", i);
    // }

    // for(int i=20; i >=1; i--){
    //     printf("%d\n", i);
    // }

    // for (float i= 1.0; i<= 10.0; i++){
    //     printf("%f\n", i);
    // }

    // for(char ch='A'; ch<='Z'; ch++){
    // printf("%c ", ch);
    // }

    // for(char c='a'; c<='z'; c++){
    //     printf("%c ", c);
    // }

                  ////WHILE LOOP
// int i = 1;
// while(i<=5){
//     printf("%d ", i);
//     i++;
// }

// int j = 0;
// while(j<=4){
//     printf("%d ", j);
//     j++;
// }

// int n;
// printf("Enter a number:");
// scanf("%d", &n);

// // int i=0;
// // while(i<=n){
// //     printf("%d ", i);
// //     i++;
// // }
// for(int i=1; i<=n; i++){
//     printf("%d\n", i);
// }

// int n;
// printf("Enter a number:");
// scanf("%d",&n);
// int sum = 0;
// for(int i=0; i <= n; i++){
//     sum = sum + i;
// }
//     printf("Sum is %d\n", sum);

// int i = 5;
// while(i>=1){
//     printf("Make the computer literate\n");
//     i = i - 1;
// }

// float a = 10.0;
// while(a<=10.5){
//     printf("Raindrops on roses...");
//     printf("...and whiskers on kittens\n");
//     a = a + 0.1;
// }

// int i=10;
// while(i>=1){
//     printf("%d\n", i);
//     i = i - 1;
// }

//  int p, n, count;
//  float r, si;
//  count = 0;
//  while(count<=3){
//     printf("Enter values of p, n, r\n");
//     scanf("%d %d %f", &p, &n, &r);
//     si = p*n*r/100;
//     printf("Simple interest is %f\n", si);
//     count++;
//  }

// int i=5;
// while(i>=1){
//     printf("Make the computer iterate\n");
//     i--;
// }

// int i=1;
// //printf("Enter the value ofi:");
// //scanf("%d", &i);
// while(i<=10){
//     printf("%d\n", i);
//     i++;
// }

// int x=4, y,z;
// y = --x;
// z = x--;
// printf("%d %d %d", x, y, z);

// int x=4, y=3, z;
// z = x-- - y;
// printf("%d %d %d", x, y, z);

//while('a' < 'b')
//printf("Malayalam is a palindrome\n");

// int x =1.1;
// while(x==1.1){
//     printf("%f\n", x);
//     x = x-0.1;
// }

// int count=1, work_hr, over_time;
// float over_tym_pay;

// while(count<=10){
//     printf("Enter the working hours of the employee no %d:", count);
//     scanf("%d", &work_hr);
//     if(count<=10){
//         over_time = work_hr - 40;
//         over_tym_pay = over_time * 12.00;
//         printf("Employee No %d overtime pay is %.2f\n", count, over_tym_pay);
//     }else{
//         printf("You have to work for more than 40 hours to get over time pay\n");
//     }
//     count++;
// }

// int num, fact=1;
// printf("Enter a number:");
// scanf("%d", &num);
// while(num!=0){
//     fact = fact * num;
//     num--;

// }
// printf("The factorial for %d is %d", num, fact);

// int a, b, c, x;
// printf("Enter the values of a and b:");
// scanf("%d %d", &a, &b);
// c = 1;
// x =b;
// while(b!=0){
//     c = c*a;
//     b = b-1;

// }
// printf("%d is raised to the power %d: %d", a, x, c);

// char c;
// int i;
// for(i=1; i<=255; i++){
//     printf("%c = %d\n", i, i);
// }

// int i;
// for(i=0; i++<10;)
// printf("%d\n", i);

// int i;
// for(i=0; ++i<=10;)
// printf("%d\n", i);

////NESTED LOOPS
//int r, c, sum;
// for(r=1; r<=3; r++){
//     for(c=1; c<=2; c++){
//         sum = r + c;
//         printf("r=%d c=%d sum=%d\n", r, c, sum);
//     }
// }

// int num, i;
// printf("Enter a number:");
// scanf("%d", &num);

// i=2;
// while(i<=num){
//     if(num%i==0){
//         printf("Not a prime number\n");
//         break;
//     }
//     i++;
// }
// if(i==num)
// printf("Prime number\n");


// int i=1, j=1;
// while(i<=100){
//     while(j<=200){
//         if(j==150)
//         break;
//         else{
//             printf("%d %d", i,j);
//         }
//     }
// }

// int i,j;
// for(i=1; i<=2; i++){
//     for(j=1; j<=2; j++){
//         if(i==j)
//         continue;
//         printf("%d %d\n", i,j);
//     }
// }


////DO WHILE LOOP
// while(4>1){
//    printf("Hello there\n");
//}


// do{
//     printf("Hello there\n");
// }while(4>1);

// char a;
// int num;
// do{
//     printf("Enter a number:");
//     scanf("%d", &num);
//     printf("The square of %d is %d\n", num, num*num);
//     printf("Want to enter another number y/n :\n");
//    fflush(stdin);
//     scanf("%c", &a);
// }while(a=='y');

// int n;
// do{
    
//     printf("Enter a number:");
//     scanf("%d\n", &n);
//     printf("%d\n", n);
//     if(n%2==0){
//         break;
//     }
// }while(1);
// printf("Thankyou\n");

// int n;
// do{
//     printf("Enter a number:");
//     scanf("%d", &n);
    
//     printf("%d\n", n);
//     if(n%7==0)
//         break;
    
// }while(1);
// printf("Thankyou\n");


// int i;
// for(i=1; i<=5;i++){
// printf("%d\n", i);
// }

// int i=1, j=1;
// for(;;){
//     if(i>5)
//     break;
//     else 
//       j+=i;
//       printf("%d\n",j);
//       i +=j;
      
//}
return 0;
}




    