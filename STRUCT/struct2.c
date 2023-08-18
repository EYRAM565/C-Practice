#include<stdio.h>
#include<stdlib.h>

struct house
{
    char name[7];
    int numOfHouses;
    float numOfAcresOfLand;
}hse;

 int main()
{

   struct house hse = {"Sucasa", 50, 10.25};
    
   struct house *ptr = (struct house*)malloc(sizeof(struct house));
    ptr = &hse;
    printf("%s %d %f\n", ptr->name, ptr->numOfHouses, ptr->numOfAcresOfLand);
    
   free(ptr);
   return 0;

}