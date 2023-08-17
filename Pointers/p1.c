#include<stdio.h>


void main()
{
    int arr[4] = {2,4,6,8};
    int *ptr;
    ptr = arr; // since the base address of this array is a pointer itself, there is no need to use the &.
    for(int i = 0; i < 4; i++)
    {
        printf("%d\t\n",arr[i]);
    }

    printf("%d %d %d\n", *ptr++, *ptr++, *ptr++);
    printf("%d", *ptr);
}