#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void checktbSoChan(){
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
        printf("Trung binh tong cac so tu nhien chia het cho 2 trong khoang %d den %d la: %.2f\n", min, max, trungBinh);
    }
}

void checksoNt(){
    printf("Nhap vao so nguyen can kiem tra: ");
    int x, i, count=0;
    scanf("%d", &x);
    for(i=2; i<=sqrt(x); i++){
        if(x%i==0){
            count++;
        }
    }
    if(count==0){
        printf("%d la so nguyen to\n", x);
    } else{
        printf("%d khong phai la so nguyen to\n", x);
    }
}

void checksoChinhphuong(){
    printf("Nhap vao so nguyen can kiem tra: ");
    int x, i, count=0;
    scanf("%d", &x);
    for(i=1; i<=sqrt(x); i++){
        if(i*i==x){
            count=1; 
            break;
        }
    }
    if(count == 1){
        printf("%d la so chinh phuong\n", x);  
    } else{
        printf("%d khong phai la so chinh phuong\n", x);
    }
}

void checkThapPhanSangNhiPhan(){
    printf("Nhap vao so thap phan can chuyen: ");
    int x;
    scanf("%d", &x);
    
    if(x == 0){
        printf("0 trong he nhi phan la: 0\n");
        return;
    }
    
    int binary[32];
    int index = 0;
    int temp = x;
    
    while(temp > 0){
        binary[index] = temp % 2;
        temp = temp / 2;
        index++;
    }
    
    printf("%d trong he nhi phan la: ", x);
    for(int i = index - 1; i >= 0; i--){
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main(){
    int luachon;
    do{
        printf("\n__________________________________________");
        printf("\n|WELCOME TO NGUYENCANHTHANG BTLAB4 COM108|");
        printf("\n******************************************");
        printf("\n1. Tinh trung binh tong cua cac so tu nhien chia het cho 2");
        printf("\n2. Tinh nang xac dinh so nguyen to");
        printf("\n3. Tinh nang xac dinh so chinh phuong");
        printf("\n4. Chuyen so thap phan sang nhi phan");
        printf("\n__________________________________________");
        printf("\n0. Exit");
        printf("\nNhap 1-4 de su dung cac tinh nang: ");
        scanf("%d", &luachon);
     
        switch(luachon){
            case 1:
                checktbSoChan();
                break;
            case 2:
                checksoNt();
                break;
            case 3:
                checksoChinhphuong();
                break;
            case 4:
                checkThapPhanSangNhiPhan();
                break;
            case 0:
                printf("Hen gap lai ban!");
                exit(0);
            default:
                printf("Nhap khong hop le. Xin moi nhap lai tu 0-4: ");
                break;
        }
    }while (luachon!=0);
    return 0;
}

