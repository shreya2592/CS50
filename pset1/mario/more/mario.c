#include<stdio.h>
#include<cs50.h>
int main(void){

    int height;

    do{
        height=get_int("Height (between 0 to 23): ");
    }while (height<0 || height>23);

    int h=height;

    for (int i=0;i<height;i++){

        for(int j=h-1;j>0;j--){
            printf(" ");
        }

        h--;

        for(int k=0;k<=i;k++){
            printf("#");
        }

        printf("  ");

        for(int x=0;x<=i;x++){
            printf("#");
        }

        printf("\n");
    }
}