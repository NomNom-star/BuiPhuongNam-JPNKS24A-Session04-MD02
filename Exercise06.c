#include<stdio.h>
int main(){

    float chiSoCu, chiSoMoi, soDien , soTien ;
    printf("Hay nhap vao so cong to dau thang cua gia dinh ban\n");
    scanf("%f", &chiSoCu);
    printf("Hay nhap vao so cong to cuoi thang cua gia dinh ban\n");
    scanf("%f", &chiSoMoi); 
    soDien = chiSoMoi - chiSoCu;

    if(0 <= soDien && soDien < 50){
        soTien= soDien * 10000;
    }

    if(50 <= soDien && soDien < 100){
        soTien = soDien * 15000;
    }

    if(100 <= soDien && soDien < 150){
        soTien = soDien * 20000;
    }

    if(150 <= soDien && soDien < 200){
        soTien = soDien * 25000;
    }

    if(200 <= soDien){
        soTien = soDien * 30000;
    }

    printf(" So tien dien cua gia dinh ban la %.3f", soTien);
    return 0; 
}