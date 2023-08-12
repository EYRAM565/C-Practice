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
  STD s = {"kwasi", 2, 90.2};
  printf("%s %d %f", s.name, s.rollno,s.marks);
}