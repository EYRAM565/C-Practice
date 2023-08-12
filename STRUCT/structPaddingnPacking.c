#include<stdio.h>
#include<stdlib.h>
//#pragma pack(1)// turns on/off some features. without the pragma pack(1) the size of the struct below was 28bytes but when the pragma pack(1) is used the size strinks to 25 bytes 

typedef struct student std;

struct student
{
    char name[17];
    int rollno;
    float marks;
}S;



void main()
{
   std S = {"kwasi", 2, 79.8};
//    printf("%s %d %f", S.name, S.rollno, S.marks);

   printf("%d", sizeof(S));

}