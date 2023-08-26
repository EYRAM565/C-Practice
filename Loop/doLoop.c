#include<stdio.h>


// a program that takes user input and multiplies  with its index a few times 
void main()
{
    int number,i=0, result=0;
    printf("enter a number: ");
    scanf("%d", &number);
    do
    {
        result = i * number;
        i++;
        printf("%d\t", result);

        if(number<=0)
        {
            printf("0 & -ve are invalid");
            break;
        }
    }while(i < 20);
}