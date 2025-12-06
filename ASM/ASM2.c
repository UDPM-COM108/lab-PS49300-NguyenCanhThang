#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void chucnang1(){
    printf("Nhap vo mot so: ");
    int n;
    float temp;
    if(scanf("%f", &temp) != 1 || temp != (int)temp){
        printf("%f khong phai la so nguyen\n", temp);
        return;
    }
    n = (int)temp;
    printf("%d la so nguyen\n", n);

    if(n<2){
        printf("%d khong phai la so nguyen to\n", n);
        return;
    }
    int laNguyenTo = 1;
    for(int i=2; i <= sqrt(n); i++){
        if(n%i == 0){
            laNguyenTo = 0;
            break;
        }    
    }
    if(laNguyenTo){
        printf("%d la so nguyen to\n", n);
    }else{
        printf("%d khong phai la so nguyen to\n", n);
    }
    
    if(n<0){
        printf("%d khong phai la so chinh phuong\n", n);
        return;
    }
    int laChinhPhuong = 0;
    for(int i = 0; i <= sqrt(n); i++){
        if(i*i == n){
            laChinhPhuong = 1;
        }
    }
    if(laChinhPhuong){
        printf("%d la so chinh phuong\n", n);
    }else{
        printf("%d khong phai la so chinh phuong\n", n);
    }
}

void chucnang2(){
    printf("Nhap vao x va y: ");
    int x, y;
    scanf("%d %d", &x, &y);
    int a = x, b = y;
    while(b!=0){
        int r = a % b;
        a = b;
        b = r;
    }
    int USCLN = a;
    int BSCNN = (x * y) / USCLN;
    printf("Uoc so chung lon nhat: %d\n", USCLN);
    printf("Boi so chung nho nhat: %d", BSCNN);     
}

void chucnang3(){
    int start, end;
    printf("Nhap vao gio bat dau: ");
    scanf("%d", &start);
    printf("Nhap vao gio ket thuc: ");
    scanf("%d", &end);
    if(start < 12 || end > 23 || start >= end){
        printf("Quan chi hoat dong tu 12 -> 23. Moi nhap lai!\n");
        return;
    }
    int soGio = end - start;
    float soTien = 0;
    if(soGio <= 3){
        soTien = soGio * 150000;
    }else{
        soTien = 3 * 150000;
        soTien += (soGio - 3) * 105000; // Giam 30% tu gio so 4
    }
    if(start >= 14 && start <= 17){
        soTien *= 0.9; // Giam 10% con 90%-> 0.9
    }
    printf("Tong so tien phai thanh toan la: %.0f", soTien);
}

void chucnang4(){
    printf("Nhap vao so kwh dien su dung: ");
    int kwh;
    scanf("%d", &kwh);
    float tien = 0;
    if(kwh < 0){
        printf("Nhap khong hop le!");
        return;
    }
    if(kwh <= 50){
        tien = kwh * 1678;
    }else if(kwh <= 100){
        tien = 50 * 1678 
             + (kwh - 50) * 1734;
    }else if(kwh <= 200){
        tien = 50 * 1678 
             + 50 * 1734 
             + (kwh - 100) * 2014;
    }else if(kwh <= 300){
        tien = 50 * 1678 
             + 50 * 1734 
             + 100 * 2014 
             + (kwh - 200) * 2536;
    }else if(kwh <= 400){
        tien = 50 * 1678 
             + 50 * 1734 
             + 100 * 2014
             + 100 * 2536
             + (kwh - 300) * 2834;
    }else{
        tien = 50 * 1678 
             + 50 * 1734 
             + 100 * 2014
             + 100 * 2536
             + 100 * 2834 
             + (kwh - 400) * 2927;
    }
    printf("Tong so tien phai tra la: %.0f", tien);
}

void chucnang5(){
    printf("Nhap vao so tien can doi: ");
    int tien;
    scanf("%d", &tien);
    int menhgia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int soTo;

    printf("Ket qua doi tien: \n");
    for(int i = 0; i < 9; i++){
        soTo = tien / menhgia[i];
        if(soTo > 0){
            printf("%d to %d\n", soTo, menhgia[i]);
        }
        tien %= menhgia[i];
    }
}

void chucnang6(){
    printf("Nhap so tien ban muon vay: ");
    float soTienVay = 0;
    scanf("%f", &soTienVay);
    if(soTienVay <= 0){
        printf("Nhap khong hop le!");
        return;
    }
    float laiSuatNH = 0.05; // 5% / thang
    int soThang = 12;
    float gocThang = soTienVay / soThang;
    float noConLai = soTienVay;
    
    printf("\nBang tra gop 12 thang:\n");
    printf("Thang\tGoc\t\tLai\t\tTong\t\tNo con lai\n");
    
    for(int i = 1; i <= soThang; i++){
        float laiThang = noConLai * laiSuatNH;
        float tongThang = gocThang + laiThang;
        noConLai -= gocThang;
        printf("%d\t%.0f\t\t%.0f\t\t%.0f\t\t%.0f\n", i, gocThang, laiThang, tongThang, noConLai);
    }
}

int main(){
    int luachon;
    do{
        printf("\n_______________________________________________");
        printf("\n|WELCOME TO NGUYENCANHTHANG ASSIGNMENT 2 COM108|");
        printf("\n************************************************");
        printf("\n1. Kiem tra so nguyen");
        printf("\n2. Uoc so va boi so chung cua 2 so");
        printf("\n3. Tinh tien cho quan karaoke");
        printf("\n4. Tinh tien dien");
        printf("\n5. Chuc nang doi tien");
        printf("\n6. Tinh lai suat vay tra gop tu ngan hang");
        printf("\n7. Vay tien mua xe");
        printf("\n8. Sap xep thong tin sinh vien");
        printf("\n9. Xay dung game POLY-LOTT");
        printf("\n10. Tinh toan phan so");
        printf("\n------------------------------");
        printf("\n0. Exit");
        printf("\nNhap vao 1-10 de su dung chuong trinh: ");
        scanf("%d", &luachon);
        switch(luachon){
            case 1:{
                chucnang1();
                }break;
            case 2:{
                chucnang2();
                }break;
            case 3:{
                chucnang3();
                }break;
            case 4:{
                chucnang4();
                }break;
            case 5:{
                chucnang5();
                }break;
            case 6:{
                chucnang6();
                }break;
            // case 7:{
            //     chucnang7();
            //     }break;
            // case 8:{
            //     chucnang8();
            //     }break;
            // case 9:{
            //     chucnang9();
            //     }break;
            // case 10:{
            //     chucnang10();
            //     }break;
            case 0:{
                printf("\nHen gap lai!!!");
                    exit(0);
                }break;
            default:{
                printf("\nNhap k hop le. Moi nhap lai: ");
                }break;
        }
    }
    while(luachon != 0);    

    return 0;
}