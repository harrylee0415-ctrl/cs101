
#include <stdio.h>

int main(){
    char grade = 'B';
    printf("Your grade is %c\n",grade);
    switch (grade) {
        case 'A':
            printf("Excellext!\n");
            break;
        case 'B':
        case 'C':
            printf("Well done!\n");
            break;
        case 'D':                
        case 'F':
            printf("Better try again!\n");
            break;
        default:
            printf("Invali grade\n");
        
    }
    return 0;
}