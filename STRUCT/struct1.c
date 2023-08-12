#include<stdio.h>


typedef struct student STD;

struct student 
{
    char name[8];
    int rollno;
    float marks;
}s;

void main()
{
  int i;
  STD *ptr = &s;
  printf("what is  your name, rollno and marks: ");
  scanf("%s%d%f", s.name, &s.rollno, &s.marks);
 
  printf(" name is %s rollno is %d and marks is %f", ptr -> name, ptr->rollno,ptr->marks);
}