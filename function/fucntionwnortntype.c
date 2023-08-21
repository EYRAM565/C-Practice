#include<stdio.h>

void sum(); // function declaration


void main() 
{
    
    sum();// function calling
  
}

void sum() // function definition
{
    int a = 2, b = 3, sum=0;
   sum = a + b;
   printf(" sum of a + b is = %d", sum);
}