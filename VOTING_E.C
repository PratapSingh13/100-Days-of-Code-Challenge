/* Program to Find Eligibility for Voting */


#include<conio.h>
#include<stdio.h>
main()
{
 float AGE,Short;       /* Short=Short Age */
 clrscr();
 printf("Please Enter Your Age \n");
 scanf("%f",&AGE);
 if(AGE>=18)
 {
  printf("Please Vote!");
 }
 else
 {
 Short=18-AGE;
 printf("Your are not Eligible for Voting! \n");
 printf("Try after - %f Years",Short);
 }
 getch();
 return 0;
}