#include <stdio.h>
#include <math.h>

int soMax(int a, int b, int c){
    int max = a;
        if(b > max)
            max = b;
        if(c > max)
            max = c;
        printf("Max = %d\n", max);
    return max;
}
int soMin(int a, int b, int c){
    int min = a;
        if(b < min)
            min = b;
        if(c < min)
            min = c;
        printf("Min = %d\n", min);
    return min;
}
int checkYear(int year){
    int flag = 0;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        flag = 1;
        printf("%d la nam nhuan\n", year);
    } else {
        printf("%d khong phai la nam nhuan\n", year);
    }
    return flag;
}
int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Sau khi doi: a = %d, b = %d\n", *a, *b);
}
int main(){
    int a, b, c;
    printf("Nhap 3 so nguyen: ");
    scanf("%d %d %d", &a, &b, &c);
    soMax(a, b, c);
    soMin(a, b, c);
    
    int year;
    printf("Nhap nam: ");
    scanf("%d", &year);
    checkYear(year);
    
    int x, y;
    printf("Nhap 2 so nguyen: ");
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    return 0;
}
