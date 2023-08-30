#include<stdio.h>


struct Time
{
    int hours;
    int minutes;
    int seconds;
}time1;


void main()
{
    char ch;
    long totalSeonds;

    printf("enter time in the format hr : ");
    
    scanf("%d", &time1.hours);  

    printf("enter accompanying minutes: ");
    scanf("%d", &time1.minutes);

    printf("enter accompanying seconds: ");
    scanf("%d", &time1.seconds);

    totalSeonds = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;

    printf("total seconds is %ld", totalSeonds);
}