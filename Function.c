#include<stdio.h>
#include<math.h>

// void printHello();
// int main(){
// printHello();
// }
// void printHello(){
//     printf("Hello!\n");
// }

// void printHello();
// void printGoodbye();
// void printNothing();

// int main(){
//     char ch;
//     int h, g;
// printf("Enter a charcter:");
// scanf("%c", &ch);
// if(ch=='h'){
//     printHello();
// }
// else if(ch=='g'){
//     printGoodbye();
// }else{
//     printNothing();
// }
// return 0;
// }

// void printHello(){
//     printf("Hello:)\n");
// }
// void printGoodbye(){
//     printf("Good Bye!!\n");
// }
// void printNothing(){
//     printf("Nothing\n");
// }

// void namaste();
// void Bonjour();

// int main(){
//     char ch;
//     char i, f;
//     printf("Enter f for french and i for indian :");
//     scanf("%c", &ch);
//     if(ch=='i'){
//         namaste();
//     }else{
//         Bonjour();
//     }
    
//     return 0;
// }

// void namaste(){
//     printf("Namaste\n");
// }
// void Bonjour(){
//     printf("Bonjour\n");
// }

// void Simple();
// void Italy();
// void Brazil();
// void Argentina();

// int main(){
//     char ch;
//     printf("Enter a character:");
//     scanf("%c", &ch);
//     if(ch=='a'|| ch=='A'){
//         Argentina();
//     }else if(ch=='b'|| ch=='B'){
//         Brazil();
//     }else if(ch=='i'|| ch=='I'){
//         Italy();
//     }else{
//         Simple();
//     }
//     return 0;
// }
// void Italy(){
//     printf("I am in Italy\n");
// }void Brazil(){
//     printf("I am in Brazil\n");
// }void Argentina(){
//     printf("I am in Argentina\n");
// }void Simple(){
//     printf("I am in main\n");
// }

// void italy();
// void brazil();
// void argentina();
// int main(){
//     printf("I am in main\n");
//     italy();
//     printf("I am finally back in main\n");

//     return 0;
// }
// void italy(){
//     printf("I am in Italy\n");
//     brazil();
//     printf("I am in Italy\n");
// }void brazil(){
//     printf("I am in brazil\n");
//     argentina();
// }void argentina(){
//     printf("I am in argentina\n");
// }

// void message();
// int main(){
//     message();
//     return 0;
// }
// void message(){
//     printf("Can't imagine life without C\n");
    
// }

// void message();
// int main(){
//     message();
//     message();
//     return 0;
// }
// void message(){
//     printf("Jewel Thief\n");
// }

// void message1();
// void message2();
// int main(){
//     message1();
//     message2();
//     return 0;
// }
// void message2(){
//     printf("But the butter was bitter\n");
// }void message1(){
//     printf("Mary bought some butter\n");
// }

// void argentina();
// int main(){
//     printf("I am in main\n");
//     argentina();
//     return 0;
// }
// void argentina(){
//     printf("I am in argentina\n");
// }

// int sum(int a, int b);
// int main(){
//     int a, b, calSum;
//     printf("Enter two numbers:");
//     scanf("%d %d", &a, &b);
//     calSum = sum(a,b);
//     printf("Sum is : %d", calSum);
//     return 0;
// }
// int sum(int a, int b){
//     int d;
//     d = a + b;
//     return(d);
// }

// int calSum(int a, int b, int c);
// int main(){
//     int a, b, c, sum;
//     printf("Enter three numbders:");
//     scanf("%d %d %d", &a, &b, &c);
//     sum = calSum( a,  b,  c);
//     printf("Sum is %d\n");
//     return 0;
// }
// int calSum(int x, int y, int z){
//  return (x + y + z);
// }

// float squareArea(float side);
// float circleArea(float radius);
// float rectangleArea(float a, float b);
// int main(){
//     // float a=5.0;
//     // float b=10.0;
//     // float radius=3.2;
//     // float side = 2.0;
//     float a, b, side, radius;
//     printf("Enter the value of length and breadth:");
//     scanf("%f %f", &a, &b);
//     printf("Enter the value of radius:");
//     scanf("%f", &radius);
//     printf("Enter the value of side:");
//     scanf("%f", &side);
//     rectangleArea( a,  b);
//     squareArea(side);
//     circleArea(radius);

    
//     printf("Area of reactangle is %f\n", rectangleArea(a, b));
//     printf("Area of circle is %f\n", circleArea(radius));
//     printf("Area of square is %f\n ", squareArea(side));
//     return 0;
// }
// float squareArea(float side){
//     return side*side;
// }float circleArea(float radius){
//     return 3.14*radius*radius;
// }float rectangleArea(float a, float b){
//     return a*b;
// }

// void fun(int);
// int main(){
// int a = 30;
// fun(a);
// printf("%d\n", a);
// return 0;
// }
// void fun(int b){
//     b=60;
//     printf("%d\n", b);
// }

// void display(int);
// int main(){
//     int i = 20;
//     display(i);
//     return 0;
// }
// void display(int j){
//     int k = 35;
//     printf("%d\n", j);
//     printf("%d\n", k);
// }

// int main(){
// int a =2;
// printf("%d %d %d\n", a, ++a, a++);
// return 0;
// }


// int main(){
//     float a=0.5;
//     float w, x, y, z;

//     w = sin(a);
//     x = cos(a);
//     y = tan(a);
//     z = pow(a,2);
//     printf("%f %f %f %f\n", w, x, y, z);
//     return 0;
// }


// int main(){
//     int i=10, j=20;
//     printf("%d %d %d\n", i, j);
//     printf("%d\n", i, j);
//     return 0;
// }

// float square(float);
// int main(){
//     float a, b;
//     printf("Enter any number:");
//     scanf("%f", &a);
//     b = square(a);
//     printf("Square of %f is %f\n", a, b);
//     return 0;
// }
// float square(float x){
//     return x*x;
// }
// void display();
// int main(){
//     printf("Learn c!!\n");
//     display();
//     return 0;
// }
// void display(){
//     printf("Followed by C, C++, JAVA\n");
//     return 0;
// }

// int check(int);
// int main(){
//     int i, c;
//     printf("Enter any number:");
//     scanf("%d", &i);
//     c = check(i);
//     printf("%d\n", c);


//     return 0;
// }
// int check(int ch){
//     if(ch>=45)
//        return (100);
//     else
//        return(1 * 10);   
// }

// float circleArea(int);
// int main(){
//     float area;
//     int radius;
//     printf("Enter radius:");
//     scanf("%d", &radius);
//     area = circleArea(radius);
//     printf("Area is %f\n", area);
//     return 0;
// }
// float circleArea(int r){
//     return 3.14 * r * r;
// }

// void slogan();

// int main(){
//     slogan();
//     return 0;
// }
// void slogan(){
//     printf("Only the men use C!\n");
// }

// void message();
// int main(){
// message();
//     return 0;
// }  
// void message(){
//     printf("Viruses are written in C\n");
//     return;
// }    

//   void swap(int a, int b);
//   int main(){
//     int a = 20, b=10;
//     swap( a, b);
//     printf("a=%d b=%d\n", a, b);

//   }
//   void swap(int x, int y){
//     int t;
//     t =x;
//     x=y;
//     y=t;
//     printf("x=%d y=%d\n", x, y );

//   }
    
