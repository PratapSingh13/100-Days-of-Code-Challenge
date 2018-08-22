/* Program to Check Leap Year */

#include<conio.h>
#include<stdio.h>
main()
{
 int YEAR;
 clrscr();
 printf("Please Enter Year \n");
 scanf("%d",&YEAR);
 if(YEAR%4==0)
 {
  printf("You are Entering Leap Year Value");
 }
  else
  {
   printf("You are Entering a Regular Year");
  }
  getch();
  return 0;
}