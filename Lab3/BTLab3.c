#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char luachon;
    do{
        printf("\n__________________________________________");
        printf("\n|WELCOME TO NGUYENCANHTHANG BTLAB3 COM108|");
        printf("\n******************************************");
        printf("\n1. Tinh nang tinh hoc luc");
        printf("\n2. Tinh nang tinh phuong trinh bac nhat");
        printf("\n3. Tinh nang tinh phuong trinh bac hai");
        printf("\n4. Tinh nang tinh tien dien");
        printf("\n__________________________________________");
        printf("\n0. Exit");
        printf("\nNhap 1-4 de su dung cac tinh nang: ");
        scanf("%d", &luachon);
        switch (luachon)
        {
        case 1:{
            printf("Nhap vao dtb cua sinh vien tu 0 - 10: ");
            int dtb;
            scanf("%d", &dtb);
                if(dtb>=9)
                    printf("Hoc luc xuat sac");
                else if(dtb>=8)
                    printf("Hoc luc gioi");
                else if(dtb>=6.5)
                    printf("Hoc luc kha");
                else if(dtb>=5)
                    printf("Hoc luc trung binh");
                else
                    printf("Hoc luc yeu");
        }break;
        case 2:{
            printf("Nhap vao a va b: ");
            int a,b;
            scanf("%d%d", &a, &b);
                if(a==0){
                    if(b==0){
                        printf("Phuog trinh vsn");
                    }else{
                        printf("phuong trinh vo nghiem");
                    }
                }else{
                    int x = -b /a;
                    printf("Phuong trinh co 1 nghiem: %d", x);
                }
        }break;
        case 3:{
            printf("Nhap vao a,b,c: ");
            int a,b,c;
            scanf("%d%d%d", &a, &b, &c);
                if(a==0){
                    if(b==0){
                        if(c==0){
                            printf("Phuong trinh vsn");
                        }else{
                            printf("Phuong trinh vo nghiem");
                        }
                    }else{
                        int x = -c / b;
                        printf("Phuong trinh co 1 nghiem: %d", x);
                    }
                }else{
                    int delta = b*b-4*a*c;
                        if(delta<0){
                    printf("Phuong trinh vo nghiem");
                }else if(delta==0){
                    int x = -b / (2 * a);
                    printf("Phuong trinh co 1 nghiem kep: %d", x);
                }else{
                    int x1 = (-b + sqrt(delta)) / (2 * a);
                    int x2 = (-b - sqrt(delta)) / (2 * a);
                    printf("Phuong trinh co 2 nghiem x1 = %d, x2 = %d", x1, x2);
                }
            } 
        }break;
        case 4:{
            printf("Nhap vao so dien tieu thu hang thang: ");
            int kwh, tienDien;
            scanf("%d", &kwh);
                if(kwh>=401){
                    tienDien = kwh * 2927;
                    printf("Tien dien phai tra la: %d", tienDien);
                }else if(kwh>=301){
                    tienDien = kwh * 2834;
                     printf("Tien dien phai tra la: %d", tienDien);
                }else if(kwh>=201){
                    tienDien = kwh * 2536;
                     printf("Tien dien phai tra la: %d", tienDien);
                }else if(kwh>=101){
                    tienDien = kwh * 2014;
                     printf("Tien dien phai tra la: %d", tienDien);
                }else if(kwh>=51){
                    tienDien = kwh * 1734;
                     printf("Tien dien phai tra la: %d", tienDien);
                }else{
                    tienDien = kwh * 1678;
                    printf("Tien dien phai tra la: %d", tienDien);
                }
        }break;
        case 0:{
            printf("Hen gap lai ban");
            exit(0);
        }
        default:{
            printf("Nhap khong hop le. Xin moi nhap lai tu 1-4: ");
        }
            break;
        }
    }while (luachon!=0);
    
    return 0;
}

