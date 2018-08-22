/* Program to Check Either Number is Multiple of 7 or not */

#include<conio.h>
#include<stdio.h>
main()
{
 int num;
 clrscr();
 printf("Please Enter any Number,>=7 \n");
 scanf("%d",&num);
 if(num%7==0)
 {
  printf("This Number is Multiple of 7");
 }
   else
  {
   printf("This Number is Not Multiple of 7");
  }
 getch();
 return 0;
}
