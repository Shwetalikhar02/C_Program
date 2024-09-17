#include<stdio.h>
#include<math.h>
int main()
{
    // A QUICK DEMO OF NESWTED IF
// int i;
// printf("Enter either 1 or 2 :");
// scanf("%d", &i);

// if(i == 1)
//     printf("You would go to heaven!\n");

// else{
//         if(i == 2)
//         printf("Hell was created with you in mind\n");
//         else
//         printf("How about mother earth !\n");

// }
// //          // PROFIT & LOSS
// int cp, sp, profit, loss;
// // COST PRICE, SELLING PRICE, PROFIT, LOSS OF THE ITEMS
// printf("Enter the cost price and selling price of item :");
// scanf("%d %d", &cp, &sp);

// if(cp>sp){ 
//     profit = cp - sp;
//     printf("Profit is : Rs. %d\n", profit);
//     }
// if(cp<sp){
//         loss = sp - cp;
//         printf("Loss is : Rs. %d", loss);
//     }
//     else{
//         printf("No profit or loss\n ");
//         printf("Thank you\n");
//     }

// //             //EVEN OR ODD
// int n;
// printf("Enter a number:");
// scanf("%d", &n);

// if(n %2==0){
//     printf("%d is even\n", n);
// }
// else{
//     printf("%d is odd\n", n);
// }

//        // LEAP YEAR OR NOT
// int year;
// printf("Enter year :");
// scanf("%d", &year);

// if(year %4==0){
//     printf("%d is a leap year", year);

// }
// else{
//     printf("This is not a leap year");
// }

//          // Checking the day of any year on 1st january
// int year, by, lp, ry, td, day;
// // BASIC YEAR, LEAP YEAR, REMAINING YEAR, TOTAL DAY
// by = 1900;
// printf("Enter the year:");
// scanf("%d", &year);
// year = (year - 1) - by; // calculating the total year between by and input year
// // Now calculating leap year
// lp = year / 4;
// // which are not a leap year
// ry = year - lp;
// /* Calculate total days present in all years 
// remaininig year are not leap year so total days in single year will be 365
// but in leap year we have 366 days in a single year*/
// td = (ry * 365) + (lp * 366) + 1;
// //find the actual days
// day = td%7;
// {
// if(day==0)
//   printf("Monday");
// else if(day==1)
//   printf("Tuesday");
// else if(day==2)
//   printf("Wednesday");
// else if(day==3)
//   printf("Thursday");
// else if(day==4)
//   printf("Friday");
// else if(day==5)
//   printf("Saturday");
// else if(day==6)
//   printf("Sunday");
// else 
//   printf("Wrong Entry"); 
// } 

//   // YOUNGEST ONE BETWEEN OF THREE
// int Ram, Shyam, Ajay;
// printf("Enter the ages of Ram, Shyam, Ajay:");
// scanf("%d%d%d", &Ram, &Shyam, &Ajay);

// if(Ram<Shyam && Ram<Ajay){
//   printf("Ram is Youngest");
// }
// else if(Shyam<Ram && Shyam<Ajay){
//   printf("Shyam is Youngest");
// }
// else if(Ajay<Shyam && Ajay<Ram){
//   printf("Ajay is Youngest");
// }

//  // Triangle is valid or not
// int a1, a2, a3, a;
// printf("Enter the angles of a1, a2, a3:");
// scanf("%d%d%d", &a1, &a2, &a3);

// a = a1+a2+a3;
// if(180==a){
//   printf("Triangle is valid");
// }
// else{
//   printf("This triangle is not valid");
// }

// //FIND THE ABSOLUTE VALUE OF__
// int n, num;
// printf("Enter a number");
// scanf("%d", &n);
// num = n;
// //first method
// if(num<0){
//  // num = (-1)*num;
//  num= abs(num);
// }
// printf("The absolute value of %d is %d", n , num);


// //AREA OF RECTANGLE IS GRT THAN PM

// float length, breadth;
// float area, pm;
// x= length; y = breadth
// printf("Enter the value of length and breadth:");
// scanf("%f%f", &length, &breadth);

// area = length * breadth;

// printf("The area of rectangle is :%f\n", area);
// scanf("%f\n", &area);
// pm = 2 * ( length + breadth);
// printf("The perimeter of rectangle is:%f\n", pm);
// scanf("%f\n", &pm);
// if(area>pm)
// {
//   printf("Area is greater than perimeter\n");
// }
// else
// {
//   printf("Perimeter is greater than area\n");
// }

// // POSITIVE NUMBER OR NEGATIVE NUMBERS
//  int num;
//  printf("Enter a number:");
//  scanf("%d", &num);
//  if(num>=0){
//    printf("Positive\n");
// }
// else{
//   printf("Negative\n");
// }


return 0;

}