/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int run=1599;
    if (run<=1500){
        printf("70元");
    }
    else{
        int over_run=run-1500;
        if (over_run%100){
            int cost=(((over_run/100)+1)*10)+70;
            printf("%d元",cost);
        }
        else{
            printf("%d元",70+(over_run/100)*100);
        }
    }
}


