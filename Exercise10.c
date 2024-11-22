#include<stdio.h>
int main(){

     int num1, num2, num3, index;
     printf("Hay nhap so thu 1\t");
     scanf("%d", &num1);
     printf("Hay nhap so thu 2\t");
     scanf("%d", &num2);
     printf("Hay nhap so thu 3\t");
     scanf("%d", &num3);

     if (num1>num2){
        index = num1;
        num1 = num2;
        num2 =index;
     }
     if (num1>num3){
        index = num1;
        num1 = num3;
        num3 = index;
     }
     if (num2>num3){
        index = num2;
        num2 = num3;
        num3 = index;
     }
     printf("Sap xep cac so da nhap theo thu tu be den lon la: %d, %d, %d",num1, num2, num3);

    return 0;
}