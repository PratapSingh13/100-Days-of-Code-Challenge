/* Let Basic Salary is 10,000 */

#include<conio.h>
#include<stdio.h>
int main()
{
 int BS,D,HR,GS;     //BS=Basic Salary,D=Dearness, HR=House Rent, GS=Gross Salary
 clrscr();
 printf("Please Enter the Basic Salary");
 scanf("\n %d",&BS);
 D=(40*BS)/100;    /* Dearness=40% of Basic Salary */
 HR=(20*BS)/100;   /* House Rent=20% of Basic Salary */
 GS=BS+D+HR;
 printf("Dearness Allowance=%d \n",D);
 printf("House Rent=%d \n",HR);
 printf("Total Gross Salary=%d",GS);
 getch();
 return 0;
}