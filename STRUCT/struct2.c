#include<stdio.h>

struct house
{
    char name;
    int numOfHouses;
    float numOfAcresOfLand;
}hse;

void main()
{

    int *ptr;
    ptr = (int*)malloc(sizeof(hse));
    ptr = &hse;
    hse = {"helloEstate", 20, 50.25};


}