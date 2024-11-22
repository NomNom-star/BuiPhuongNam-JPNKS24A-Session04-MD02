#include<stdio.h>
int main(){

    int number;
    printf("Hay nhap vao 1 so nguyen\n");
    scanf("%d",&number);
    if( number > 0){
        printf("So vua nhap la so nguyen duong");
    } else if( number < 0) {
        printf("So vua nhap la so nguyen am");
    } else {
        printf(" So vua nhap la so 0");
    }

    return 0;
}
