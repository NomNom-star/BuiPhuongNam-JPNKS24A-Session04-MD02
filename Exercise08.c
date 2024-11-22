#include<stdio.h>
int main(){

    float canh1, canh2, canh3;
    printf("Nhap vao canh thu nhat\t");
    scanf("%f",&canh1);
    printf("Nhap vao canh thu hai\t");
    scanf("%f",&canh2);    
    printf("Nhap vao canh thu ba\t");
    scanf("%f",&canh3);
    
    if(canh1 <=0 || canh2 <=0 || canh3 <=0){
        printf("Khong phai 3 canh tam giac\n");
    }else if (canh1+canh2>canh3 || canh1+canh3>canh2 || canh2+canh3>canh1){
        printf("La 3 canh tam giac\n");
    } else {
        printf("Khong la 3 canh tam giac\n");
    }

    return 0;
}