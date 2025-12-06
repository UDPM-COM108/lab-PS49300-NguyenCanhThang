#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nguyenAmphuAm(){
    char s[100];
    printf("Nhap vao chuoi: ");
    gets(s);
    int i = 0;
    int n = 0;
    int p = 0;
    while(s[i++] != '\0'){
        if(s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u'){
            n++;
        }else{
            p++;
        }
    }
    printf("Chuoi '%s' co chua %d nguyen am va %d phu am\n", s, n, p);
}
void userandpassword(){
    char userSys[] = "admin";
    int passSys = 12345;
    char user[100];
    int pass;
    printf("Nhap vao ten dang nhap: ");
    gets(user);
    printf("Nhap vao mat khau: ");
    scanf("%d", &pass);
    //if(user == userSys && pass == passSys){
    if(strcmp(user, userSys) == 0 && pass == passSys){
        printf("Dang nhap thanh cong");
    }else{
        printf("Dang nhap that bai");    
    }
}

void xuathienC(){
    char a[] = {"ACCBDE"};
    char timkiem = 'C';
    char dem = 0;

    for(int i = 0; a[i] != '\0'; i++){
        if(a[i] == timkiem){
            dem ++;
        }
    }
    printf("So lan xuat hien cua '%c' la: %d\n", timkiem, dem);
}

int main(){
    nguyenAmphuAm();
    userandpassword();
    xuathienC();
    return 0;
}