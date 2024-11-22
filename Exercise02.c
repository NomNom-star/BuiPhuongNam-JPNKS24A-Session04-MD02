#include<stdio.h>
int main(){
    int number;
    printf("Hay nhap 1 so nguyen bat ky\n");
    scanf("%d", &number);
    if (number % 2 == 0){
        printf(" So vua nhap la so chan ");
    }
    else {
        printf(" So vua nhap la so le");
    }

    return 0;
}
