#include<stdio.h>
int main(){

    int number;
    printf("Hay nhap 1 so nguyen bat ki\n");
    scanf("%d",&number);
   
    if(number % 3 ==0 && number % 5 == 0){
        printf("So chia het cho ca 3 va 5");
    } else if (number % 5 == 0){
        printf(" So chi chia het cho 5");
    } else if (number % 3 ==0){
        printf(" So chi chia het cho 3");
    } else {
        printf("So khong chia het cho 3 hoac 5");
    }
    

    return 0;
}