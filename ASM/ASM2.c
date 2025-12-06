#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void chucnang1(){
    int x;
    float temp;
    printf("Nhap vao 1 so: ");
    
    if(scanf("%f", &temp) != 1 || (int)temp != temp){
        printf("\n%f khong phai la so nguyen", temp);
        return;
    }
    x = (int)temp;
    printf("\n%d la so nguyen", x);

    if(x < 2){
        printf("\n%d khong phai la so nguyen to", x);
        return;
    }
    int dem = 1; // gan dinh la so nguyen to
    for(int i=2; i <= sqrt(x); i++){
        if(x%i == 0){
            dem = 0;
            break;
        }
    }
    if(dem){
        printf("\n%d la so nguyen to", x);
    }else{
        printf("\n%d khong phai la so nguyen to", x);
    }

    if(x < 0){
        printf("\n%d khong phai la so chinh phuong", x);
        return;
    }
    int chinhphuong = 0;
    for(int i= 0; i <= sqrt(x); i++){
        if(i*i == x){
            chinhphuong = 1; //tim thay
            break;
        }
    }
    if(chinhphuong){
        printf("\n%d la so chinh phuong", x);
    }else{
        printf("\n%d khong phai la so chinh phuong", x);
    }
}

void chucnang2(){
    int x,y,max=1,min;
    printf("Nhap vao 2 so x y:");
    scanf("%d %d",&x,&y);
    //UCLN
    if (x==0||y==0){
        max=x+y;
    }
    
    for (int i = 1; i <= x && i<= y; i++){
        if (x%i==0&&y%i==0){
            if (max<i){
                max=i;
            }
        }
    }
    printf("UCLN la %d\n",max);
    //BCNN
    if (x>y){
        min=x;
    }else{
        min=y;
    }
    while (1){// dk chay vo han
        if (min%x==0&&min%y==0){
            break;// khi tim dc bs chung nho nhat thi dung lai
        }
        min++;
    }
    printf("BCNN la %d\n",min);
}

void chucnang4(){
    int k,TIEN=0;
    printf("Nhap vao so dien(kwh):");
    scanf("%d",&k);
    if (k<=50){
        TIEN=k*1678;
    }
    else if (k<=100){
        TIEN=50*1678;
    	TIEN+=(k-50)*1734;
    }
    else if (k<=200){
        TIEN=50*1678;
    	TIEN+=50*1734;
    	TIEN+=(k-100)*2014;
    }
    else if (k<=300){
        TIEN=50*1678;
    	TIEN+=50*1734;
    	TIEN+=100*2014;
    	TIEN+=(k-200)*2536;
    }
    else if (k<=400){
        TIEN=50*1678;
    	TIEN+=50*1734;
    	TIEN+=100*2014;
    	TIEN+=200*2536;
        TIEN+=(k-300)*2834;
    }
    else{
        TIEN=50*1678;
    	TIEN+=50*1734;
    	TIEN+=100*2014;
    	TIEN+=200*2536;
        TIEN+=300*2834;
        TIEN+=(k-400)*2927;
    }
    printf("TIEN DIEN = %d VND",TIEN);
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
            // case 3:{
            //     chucnang3();
            //     }break;
            case 4:{
                chucnang4();
                }break;
            // case 5:{
            //     chucnang5();
            //     }break;
            // case 6:{
            //     chucnang6();
            //     }break;
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