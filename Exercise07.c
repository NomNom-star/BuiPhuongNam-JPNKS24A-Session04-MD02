#include<stdio.h>
int main(){

    int year;
    printf(" Hay nhap vao 1 nam bat ky\n");
    scanf("%d",&year);
    if(year < 0){
        printf("Nam nhap vao khong hop le");
    } else if (year%4==0 && year%100!=0 || year%400==0){
        printf("Nam %d la nam nhuan", year);
    } else {
        printf(" Nam %d khong phai la nam nhuan");
    }

    return 0;
}