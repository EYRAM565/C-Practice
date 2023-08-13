#include<stdio.h>

/*Auto Storage Class*/
//storage classes have four attributes ie its default value, the location(where it is stored in memory), its scope and its lifetime. for auto storage classes, its default value is a garbage value in memory, it is stored in RAM, its scope is either in a block or a function and its lifetime is within a block,  the code runs to the end of the block or function.

 int a = 10;// there is a red sqiggle line which indicates that a global declaration may not have this storage class



void main()
{
    auto int a = 5;

  {
    printf("%d\n", a);
    // it was able to print the 5 because the scope of the variable is a local variable and this block is within a function.
  }

  printf("%d", a);
 


}

