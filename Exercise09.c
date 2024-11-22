#include<stdio.h>
int main(){

    int day, month, year;
    printf(" Hay nhap ngay\t");
    scanf("%d",&day);
     printf(" Hay nhap thang\t");
    scanf("%d",&month);    
    printf(" Hay nhap nam\t");
    scanf("%d",&year);

    if (year>0) {
        if( month>=1 && month <=12){
            if((day>=1 && day<=31) && (month == 1 || month == 3 || month==5 || month==7|| month==8 || month==10 || month==12 )){
                printf("Ngay thang nam hop le\n");
            } else if ((day>=1 && day <=30) && (month==4 || month==6 || month==9 || month==11)){
                printf("Ngay thang nam hop le\n");
            } else if ((day>=1 && day <=28) && month == 2){
                printf("Ngay thang nam hop le\n");
            } else if (day == 29 && month==2 && (year%4==0 && year%100!=0 || year%400==0)){
                printf("Ngay thang nam hop le");
            }
        }else {
            printf("Khong hop le\n");
        }
    } else {
        printf("Khong hop le\n");
    }
    
    return 0;
}