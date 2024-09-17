#include<stdio.h>
int main()
{ // IF ELSE
                    // about age
    // int age;
    // printf("Enter age:");
    // scanf("%d", &age);
    //  if(age > 18){
    //     printf(" Adult\n");
    //     printf(" They can vote\n");
    //     printf(" They can drive\n");
    //  }
    //  else {
    //     printf(" Not Adult\n");
    //  }
    //  printf(" Thank you\n");
 
                   //about servant performance 
    // int num;
    // printf("Enter number:");
    // scanf("%d", &num);
    
    // if(num<10){
    //     printf("What an obedient servant you are!\n ");
    // }else {
    //     printf("What an extraodinary servant:)");
    // }

                 // QUANTITY & DISCOUNT & TOTAL
//     int qty, dis;
//     float rate, tot;
//     printf("Enter quantity & rate :");
//     scanf("%d %f",&qty, &rate);

//     dis = 10;
//     tot = (qty * rate) - (qty * rate * dis / 100);
    
//     if(qty>1000){
        
//         printf("Total expenses = Rs. %f\n", tot);

//     }
//      else {
//          printf("No discount!");
//      }

                  /*CALCULATION OF BONUS*/
//     int bonus, yos, yoj, cy;
//     /* yos - year of service
//     yoj - year of joined
//     cy - current year */

//     printf("Enter current year & year of joining :");
//     scanf("%d%d\n", &cy, &yoj);

//     yos = cy - yoj;

//     if(yos>3){
//      bonus = 2500;
//      printf("Bonus : Rs. %d\n", bonus);

//     }

       /* CALCULTION OF GROSS SALARY */
// int gs, bs, hra, da;
// printf("Enter basic salary:");
// scanf("%d", &bs);

// if(bs<1500){
//      hra = bs * 10 / 100;
//      da = 90 * bs /100;  
//      gs = bs + hra + da;
//      printf("Gross salary = Rs. %d\n", gs);
     
// } else{
//      hra = 500;
//      da = bs * 98 / 100;
//      gs = bs + hra + da;
//      printf("Gross salary = Rs. %d\n", gs);
// }

    // COMPLEX IF ELSE
    // CALCULATING PERCENTAGE OF STUDENTS
// int m1, m2, m3, m4, m5, per;
// printf("Enter marks in 5 sujects:");
// scanf("%d%d%d%d%d\n", &m1, &m2, &m3, &m4, &m5);

// per = (m1 + m2 + m3 + m4 + m5) / 500 * 100;
// printf("Percentage is %d\n", per);
// // if(per>=60)
// if((per>=50) && (per<60))
// printf("Second Division\n");
// if((per>=40) && (per<50))
// printf("Third Division\n");
// if(per<40)
// printf("Fail\n");

// if(per>=60)
//    printf("First Division\n");
// else if(per>=50)
//    printf("Second Division\n");
// else if(per>=40)
//    printf("Third Division\n");
// else
//    printf("Fail\n");  

// INSURANCE OF DRIVER
// char sex, ms;
// int age;

// printf("Enter age, sex, marital status:");
// scanf("%d %c %c", &age, &sex, &ms);

// if((ms == 'M')|| (ms == 'U' && sex =='M' && age>30)|| (ms == 'U' && sex =='F' && age >25))
// printf("Driver should be insured\n");
// else
// printf("Driver should not be insured\n");
   
//ABOUT AGE
// int age;
// printf("Enter the age:");
// scanf("%d", &age);

// if(age>=18){
//     printf("Adult\n");
// }
// else if(age>13 && age<18){
//     printf("Teenager\n");
// }
// else{
//     printf("Child\n");
// }
      // USING TERNARY OPERATOR OR CONDITIONAL OPERATOR
// int age;
// printf("Enter the age:");
// scanf("%d", &age);
// age>=18? printf("Adult\n"): printf("Not adult\n");

// int per;
// printf("Enter percentage:");
// scanf("%d", &per);
// per>=80? printf("Pass\n"): printf("Fail\n");

// int amt;
// printf("Enter the amount:");
// scanf("%d", &amt);
// amt>=2000? printf("Going for picnic\n"): printf("Not go anywhere");

//CHECK IF A STUDENT PASS OR FAIL
int marks;
printf("Enter number:");
scanf("%d", &marks);
// if(marks<=30){
//     printf("Fail\n");
// }
// else{
//     printf("Pass\n");
// }
//// BY CONDITIONAL OPERATOR
//marks>=30? printf("Pass\n"): printf("Fail\n");

// if(marks>30 && marks<100){
//     printf("Pass\n");   
// }
// else if(marks<30){
//     printf("Fail\n");
// }
// else{
//     printf("Wrong marks\n");
// }

// if(marks<=100 && marks>=90){
//     printf("A+\n");
// }
// else if(marks<90 && marks>=70){
//     printf("A\n");
// }
// else if(marks<70 && marks>=30){
//     printf("B\n");
// }
// else if(marks<30){
//     printf("C\n");
// }

////ALPHABET IS UPPER CASE OR NOT
// char ch;
// printf("Enter Character:");
// scanf("%c", &ch);

// if(ch>='A' && ch <='Z'){
//     printf("Upper Case\n");
// }
// else if(ch>='a' && ch<='z'){
//     printf("Lower Case\n");
// }
// else{
//     printf("Not english character\n");
// }


return 0;

}    