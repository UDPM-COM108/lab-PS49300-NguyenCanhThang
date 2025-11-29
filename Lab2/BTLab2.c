// #BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
// Input: Nhập vào 2 số nguyên x và y

#include <stdio.h>
int main(){
    int x, y;
    printf("Nhap vao x va y: ");
    scanf("%d%d", &x, &y);

    int hieu = x - y;
    int tong = x + y;

    printf("Tong cua 2 so la: %d", tong);
    printf("\nHieu cua 2 so la: %d", hieu);
    return 0;
}

// #BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
// Input: Nhập vào cdai và crong
// Output: Hiển thị ra màn hình chuvi và dientich của hình chữ nhật

// #include <stdio.h>
// int main(){
//     int chieudai, chieurong;
//     printf("Nhap vao chieu dai va chieu rong: ");
//     scanf("%d%d", &chieudai, &chieurong);

//     int chuvi = (chieudai + chieurong)*2;
//     int dientich = chieudai * chieurong;

//     printf("Chu vi hcn la: %d cm", chuvi);
//     printf("\nDien tich hcn la: %d cm%c", dientich, 178);



//     return 0;
// }

// #Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
// Input: Nhập vào từ bàn phím bán rính
// Output: Hiển thị ra màn hình chuviHT và dientichHT của hình tròn

// #include <stdio.h>
// #include <math.h>

// int main(){
//     const double pi = M_PI; // Cách này khi xài phải có #include <math.h>
//     float r;
//     printf("Nhap so vao ban kinh: ");
//     scanf("%f", &r);

//     float chuvi = 2 * pi * r;
//     float dientich = pi * pow(2, r); // pow chỉ sử dụng khi có #include <math.h>

//     printf("Chu vi hinh tron: %.2f cm", chuvi); 
//     printf("\nDien tich hinh tron: %.2f cm%c", dientich, 178); // %c là muốn in kí tự trong bảng ASCII

//     return 0;
// }

