#include<stdio.h>
#include<stdlib.h>

int main()
{
  // this a simple program of dynamically allocating memory

    int *ptr,n,i;
    printf("enter the total number of values: ");
    scanf("%d", &n);
    printf("enter the numbers: ");
    ptr = (int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr + i));
    }

    printf("the entered numbers are: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t", *(ptr + i));
    }
   free(ptr);
   return 0;
}