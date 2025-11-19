#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int luachon;
    do{
        printf("\n__________________________________________");
        printf("\n|WELCOME TO NGUYENCANHTHANG BTLAB4 COM108|");
        printf("\n******************************************");
        printf("\n1. Tinh trung binh tong cua cac so tu nhien chia het cho 2");
        printf("\n2. Tinh nang xac dinh so nguyen to");
        printf("\n3. Tinh nang xac dinh so chinh phuong");
        printf("\n__________________________________________");
        printf("\n0. Exit");
        printf("\nNhap 1-3 de su dung cac tinh nang: ");
        scanf("%d", &luachon);
        switch (luachon)
        {
        case 1:{
            printf("Nhap vao min, max: ");
            int min, max;
            scanf("%d%d", &min, &max);
            float sum=0, bienDem=0, trungBinh=0;
            for(int i=min; i<=max; i++){
                if(i%2==0){
                    sum+=i;
                    bienDem++;
                }
            }
            if(bienDem!=0){
                trungBinh = sum/bienDem;
                printf("Trung binh tong cac so tu nhien chia het cho 2 trong khoang %d den %d la: %.2f", min, max, trungBinh);
            }
            }break;
        case 2:{
            printf("Nhap vao so nguyen can kiem tra: ");
            int x, i, count=0;
            scanf("%d", &x);
            for(i=2; i<x; i++){
                if(x%i==0){
                    count++;
                }
            }
            if(count==0 && x>1){
                printf("%d la so nguyen to", x);
            } else{
                printf("%d khong phai la so nguyen to", x);}
            }break;
        case 3:{
            printf("Nhap vao so nguyen can kiem tra: ");
            int x, i, count=0;
            scanf("%d", &x);
            for(i=1; i<x; i++){
                if(i*i==x){
                    count=1; //danh dau la so chinh phuong
                    break;;
                }
            }
            if(count == 1){
                printf("%d la so chinh phuong", x);  
            } else{
                printf("%d khong phai la so chinh phuong", x);
            }
            }break;     
        case 0:{
            printf("Hen gap lai ban!");
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

