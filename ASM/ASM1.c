#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int luachon;
    do{
        printf("\n______________________________________________");
        printf("\n|WELCOME TO NGUYENCANHTHANG ASSIGNMENT COM108|");
        printf("\n**********************************************");
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
                printf("\nNhap vao so nguyen: ");
                }break;
            case 2:{
                printf("\nNhap vao 2 so nguyen: ");
                }break;
            case 3:{
                printf("\nNhap vao so gio hat: ");
                }break;
            case 4:{
                printf("\nNhap vao so kwh tieu thu: ");
                }break;
            case 5:{
                printf("\nNhap vao so tien can doi: ");
                }break;
            case 6:{
                printf("\nNhap vao so tien vay: ");
                }break;
            case 7:{
                printf("\nNhap vao gia tri xe can mua: ");
                }break;
            case 8:{
                printf("\nNhap vao so luong sinh vien: ");
                }break;
            case 9:{
                printf("\nChao mung den voi game POLY-LOTT!");
                }break;
            case 10:{
                printf("\nNhap vao phan so: ");
                }break;
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