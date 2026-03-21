// Yýldýzlarla Kelebek Yapma 
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,satir;

    printf("satir sayisini giriniz:");
    scanf("%d",&satir);

    // Kelebeðin üst kýsmý
    for(i=1;i<=satir;i++){

        // sol kanat
        for(j=1;j<=i;j++){
            printf("*");
        }

        // aradaki boþluk
        for(j=1;j<=2*(satir-i);j++){
            printf(" ");
        }

        // sað kanat
        for(j=1;j<=i;j++){
            printf("*");
        }

        printf("\n");
    }

    // Kelebeðin alt kýsmý
    for(i=satir;i>=1;i--){

        // sol kanat
        for(j=1;j<=i;j++){
            printf("*");
        }

        // aradaki boþluk
        for(j=1;j<=2*(satir-i);j++){
            printf(" ");
        }

        // sað kanat
        for(j=1;j<=i;j++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
