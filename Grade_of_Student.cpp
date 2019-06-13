#include <stdio.h>
int main()
{
    int mark[5],i;
    float sum=0,avg;
    printf("Plz enter 5 marks");
    for(i=0;i<5;i++)
    {
        scanf("%d",&mark[i]);
        sum=sum+mark[i];
    }
    avg=sum/5;
    printf("It is a percentage");
    if(avg>100)
    {
        printf("First Division");
    }
    else if(avg>60 && avg<=100)
    {
        printf("Second Division");
    }
    else if(avg>33 && avg<=60)
    {
        printf("Third Division");
    }
    else
    {
        printf("Failed");
    }

    
}
