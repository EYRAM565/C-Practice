#include<stdio.h>
#include<stdlib.h>
//#pragma pack(1)// turns on/off some features. without the pragma pack(1) the size of the struct below was 28bytes but when the pragma pack(1) is used the size strinks to 25 bytes 

typedef struct House hse;

struct House
{
    char houseColor[17];
    int numOfDoors;
    float priceOfHouse;
}H;



void main()
{
   hse H = {"navy blue", 6, 479.8};
   printf("%s %d %f", H.houseColor, H.numOfDoors, H.priceOfHouse);

   // printf("%d", sizeof(H));

}