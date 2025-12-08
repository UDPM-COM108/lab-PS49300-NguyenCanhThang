#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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

void chucnang7(){
    printf("Nhap vao so phan tram vay toi da: ");
    int tileVay;
    scanf("%d", &tileVay);
    const float giatriXe = 500000000;
    const float laisuatNam = 0.072; // 7.2%/nam
    const int soNam = 24;
    const int soThang = soNam * 12;
    if(tileVay < 0 || tileVay > 100){
        printf("Ti le vay khong hop le!");
        return;
    }

    float traTruoc = giatriXe * (100 - tileVay) / 100;
    float tienVay = giatriXe * tileVay / 100;
    float laiThang = laisuatNam / 12;
    float traGop = tienVay * (laiThang * pow(1+laiThang, soThang)) / (pow(1+laiThang, soThang) - 1);

    printf("\nGia tri xe: %.0f VND\n", giatriXe);
    printf("Phan tram vay: %.d%%\n", tileVay);
    printf("Tien phai tra truoc: %.0f VND\n", traTruoc);
    printf("Tien vay: %.0f VND\n", tienVay);
    printf("So tien phai tra hang thang: %.0f VND\n", traGop);
    printf("Thoi han vay: %d nam (%d thang)\n", soNam, soThang);
}

struct SinhVien{
    char hoten[50];
    float diem;
    char hocluc[20];
};
void chucnang8(){
    int n;
    printf("Nhap vao so luong sinh vien: ");
    scanf("%d", &n);
    getchar();

    struct SinhVien sv[n];
    for(int i= 0; i < n; i++){
        printf("\nNhap ten sinh vien %d: ", i+1);
        fgets(sv[i].hoten, sizeof(sv[i].hoten), stdin);
        sv[i].hoten[strcspn(sv[i].hoten, "\n")] = 0;
        
        printf("Nhap diem sinh vien %d: ", i + 1);
        scanf("%f", &sv[i].diem);
        getchar();

        if(sv[i].diem > 10 || sv[i].diem < 0){
            printf("Diem khong hop le!");
            return;
        }
        if(sv[i].diem >= 9)
            strcpy(sv[i].hocluc, "Xuat sac");
        else if(sv[i].diem >= 8)
            strcpy(sv[i].hocluc, "Gioi");
        else if(sv[i].diem >= 7)
            strcpy(sv[i].hocluc, "Kha");
        else if(sv[i].diem >= 5)
            strcpy(sv[i].hocluc, "Trung binh");
        else
            strcpy(sv[i].hocluc, "Yeu");
    }

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(sv[i].diem > sv[i].diem){
                struct SinhVien temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
    printf("\nDanh sach sau khi sap xep\n");
    for(int i=0; i <n; i++){
        printf("%d. %s | %.2f | %s\n", i+1, sv[i].hoten, sv[i].diem, sv[i].hocluc);
    }
}

void chucnang9(){
    int x, y;
    printf("Nhap so thu 1 (1-15): ");
    scanf("%d", &x);
    printf("Nhap so thu 2 (1-15): ");
    scanf("%d", &y);
    
    if(x < 1 || x > 15 || y < 1 || y > 15){
        printf("Nhap khong hop le!");
        return;
    }
    srand(time(NULL));
    int r1 = rand() % 15 + 1;
    int r2 = rand() % 15 + 1;
    printf("\nHe thong quay ra: %d - %d\n", r1, r2);
    int trung = 0;
    if(x==r1 || x==r2)
        trung++;
    if(y==r2 || y==r1)
        trung++;
    if(trung==0)
        printf("Khong trung so nao. Chuc may man lan sau!\n");
    else if(trung==1)
        printf("Ban trung 1 so. Chuc mung ban dat giai Nhi!\n");
    else
        printf("Trung 2 so. Chuc mung ban da trung giai Nhat!\n");
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
            case 7:{
                chucnang7();
                }break;
            case 8:{
                chucnang8();
                }break;
            case 9:{
                chucnang9();
                }break;
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