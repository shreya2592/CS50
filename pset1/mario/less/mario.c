#include<stdio.h>
#include<cs50.h>

int main(void){
    int height;

    do{
        height = get_int("Height between 0 and 24: ");

    }while(height<0 || height>23);

    int h=height;
    for (int i=0;i<height;i++){

        for(int k=h-1; k>0;k--){
            printf(" ");
        }
        h--;


        for(int j=i+2; j>0;j--){
            printf("#");
        }
        printf("\n");
    }
}