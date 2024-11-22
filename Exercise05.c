#include<stdio.h>
int main(){

    int num1, num2, num3;
    printf("Hay nhap vao so thu nhat");
    scanf("%d",&num1);
    printf("Hay nhap vao so thu hai");
    scanf("%d", &num2);
    printf("Hay nhap vao so thu ba");
    scanf("%d",&num3);

    if(num1<num3<num2 || num2<num3<num1 ){
        printf(" So thu 3 nam trong khoang giua so thu 1 va so thu 2");
    } else {
        printf("So thu 3 khong nam trong khoang giua so thu 1 va thu 2");
    }

    return 0;
}