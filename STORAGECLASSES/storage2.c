#include<stdio.h>

/*REGISTER STORAGE CLASS*/
//Register storage class have the same attributes like the auto storage class but the difference is that frequently used variables/functions are stored in the cpu register. it saves alot of time when frequently used variables are stored in the cpu register because switching from processing in the cpu to storing values in the RAM takes alot of time. The size of the cpu register is in kilobytes.

//register int number = 15;
// register storage class do not allow a global-scope declaration. 

int main()
{
    register int number = 9;
    {
        printf("number is %d\n", number);
    }

    printf("number is %d", number);

    return 0;
}
