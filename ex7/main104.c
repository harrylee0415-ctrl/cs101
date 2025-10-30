/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int add_func(int a,int b){
    return a+b;
}
int main()
{   
    int n=10, m=1;
    int (*func_ptr)(int, int);
    func_ptr = add_func;
    printf("%d\n", func_ptr(n,m));
    return 0;
}
