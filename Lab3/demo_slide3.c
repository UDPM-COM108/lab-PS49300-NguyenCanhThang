//Nhap dtb
#include <stdio.h>

int main(){
    double dtb;
    printf("Nhap diem trung binh: ");
    scanf("%lf", &dtb);
    if(dtb >= 9)
        printf("\nXuat sac");
    else if(dtb >= 8)
        printf("Gioi");
    else if(dtb >= 7)
        printf("Kha");
    else if(dtb >=5)
        printf("Trung binh");
    else
        printf("Yeu");
    
// lam menu
printf("VN vo bn dan toc ae: \n");
printf("a. 52\nb. 53\nc. 54\nd. 55\n");
printf("Chon dap an dung (a,b,c,d): ");
char dapAn;
scanf("%s", &dapAn);
switch (dapAn){
    case 'a': printf("Ban da chon sai\n");
    break;
    case 'b': printf("Ban da chon sai\n");
    break;
    case 'c': printf("Ban da chon dung\n");
    break;
    case 'd': printf("Ban da chon sai\n");
    break;
    default: printf("Dap an k hop le. Vui long nhap lai");
    }
    return 0;
}
