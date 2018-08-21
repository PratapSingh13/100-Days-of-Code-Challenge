/* Gross Salary Using Condition */

#include<conio.h>
#include<stdio.h>
main()
{
 float BS,HRA,DA,GS;          /*BS=Basic Salary, GS=Gross Salary*/
 clrscr();
 printf("Please Enter the Basic Salary \n");
 scanf("%f",&BS);
 if(BS<1500)
 {
  HRA=BS*10/100;
  DA=BS*90/100;
 }
 else
 {
  HRA=500;
  DA=BS*98/100;
 }
 GS=BS+HRA+DA;
 printf("Gross Salary=%f",GS);
 getch();
 return 0;
}
