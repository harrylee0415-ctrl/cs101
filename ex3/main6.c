/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int stay=119;
    if (stay<=30){
        printf("免費");
    }
    else if (stay>=240){
        printf("240元");
    }
    else{
        if (stay%30){
            int money=((stay/30)+1)*30;
            printf("%d 元",money);
        }
        else{
            printf("%d 元",stay);
        }
    }
    return 0;
}


