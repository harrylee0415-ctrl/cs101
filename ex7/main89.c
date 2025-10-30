/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{   
    char* names[] ={
        "IU",
        "IU Lee",
        "李知恩"
    };
    
    char* (*ptr)[3];
    ptr = &names;
    for (int i=0;i<3;i++){
        printf("ptr[%d] = %s\n",i,*(*ptr+i));
    }
    return 0;
}
