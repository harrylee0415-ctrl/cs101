/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int factorial(int n){
    if (n == 1) return 1;
    return n*factorial(n-1);
}

int main()
{
    int n=5;
    int m = factorial(n);
    printf("factorial %d =%d\n",n,m);
    return 0;
}

