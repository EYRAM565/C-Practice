#include<stdio.h>



enum operators
{
   add = '+',
   sub = '-',
   mul = '*',
   divide = '/'
};

void main()
{
   char ch,op;
   int  num1, num2;
  do
  {
   printf("enter 2 numbers: ");
   scanf("%d%d", &num1,&num2);
   printf("enter an operator(*,/,+,-): ");
   scanf("%c",&op);

   switch (op)
   {
   case add:
      printf("%d + %d = %d", num1, num2, num1 + num2);
      break;
   case sub:
      printf("%d - %d = %d", num1,num2, num1 - num2);
      break; 
   case mul:
      printf("%d * %d = %d", num1, num2, num1 * num2);
      break;   
   case divide:
      printf("%d / %d = %d", num1, num2, num1 / num2);
      break;   
   default:
       printf("invalid arithmetic operator");
      break;
   }

   printf("do you want to perform another? enter (y or n): ");
   scanf("%c", &ch);


  }while( ch != 'n');
  
   
   
}