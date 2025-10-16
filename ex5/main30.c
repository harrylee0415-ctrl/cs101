/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int recursion(int n){
    if (n == 0) return 0;
    printf("%d\n",n);
    recursion(n-1);
}

int main()
{
    recursion(5);
    return 0;
}

