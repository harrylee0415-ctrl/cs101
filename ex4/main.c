/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    FILE* fp;
    int a[] ={0,1,2};
    char b[] ="ABC";
    float c[] ={1.1,1.2,1.3};
    int ra[3];
    char rb[4];
    float rc[3];
    
    fp=fopen("a.bin","wb+");
    fwrite(a,sizeof(int),3,fp);
    fwrite(b,sizeof(char),3,fp);
    fwrite(c,sizeof(float),3,fp);
    fseek(fp,0,SEEK_SET);
    fread(ra,sizeof(int),3,fp);
    fread(rb,sizeof(char),3,fp);
    fread(rc,sizeof(float),3,fp);
    
    for (int i=0;i<3;i++){
        printf("%d ",ra[i]);
    }
    printf("\n");
    printf("%s",rb); 
    printf("\n");
    for (int i=0;i<3;i++){
        printf("%.1f ",rc[i]);
    }
    fclose(fp);
    return 0;
}