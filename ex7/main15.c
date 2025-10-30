/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    int var = 20;
    int* ip;
    ip=&var;
    printf("Address of var: %p\n",&var);
    printf("Value of ip: %p\n", ip);
    printf("Address of ip: %p\n",&ip);
    printf("Value of *ip: %d\n", *ip);

}
