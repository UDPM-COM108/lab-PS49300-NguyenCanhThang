// #BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
// Input: Nhập vào 2 số nguyên x và y

#include <stdio.h>
#include <math.h>
#define PI 3.14
int main(){
    int x, y;
    printf("Nhap vao x va y: ");
    scanf("%d%d", &x, &y);

    int hieu = x - y;
    int tong = x + y;

    printf("Tong cua 2 so la: %d", tong);
    printf("\nHieu cua 2 so la: %d", hieu);

// #BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
// Input: Nhập vào cdai và crong
// Output: Hiển thị ra màn hình chuvi và dientich của hình chữ nhật

    int chieudai, chieurong;
    printf("Nhap vao chieu dai va chieu rong: ");
    scanf("%d%d", &chieudai, &chieurong);

    int chuvi = (chieudai + chieurong)*2;
    int dientich = chieudai * chieurong;

    printf("Chu vi hcn la: %d cm", chuvi);
    printf("\nDien tich hcn la: %d cm%c", dientich, 178);

// #Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
// Input: Nhập vào từ bàn phím bán rính
// Output: Hiển thị ra màn hình chuviHT và dientichHT của hình tròn

    float r;
    printf("Nhap so vao ban kinh: ");
    scanf("%f", &r);

    float chuVi = 2 * PI * r;
    float dienTich = PI * r * r; 

    printf("Chu vi hinh tron: %.2f cm", chuVi); 
    printf("\nDien tich hinh tron: %.2f cm%c", dienTich, 178); // %c là muốn in kí tự trong bảng ASCII


// BT 4. Xay dung chuong trinh tinh diem trung binh
// input nhap ao ban phim diem mon toan ly hoa
// Output hien thi man hinh tinh diem trung binh

    float toan, ly, hoa;
    float diemTB;

    printf("Nhap diem mon Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem mon Ly: ");
    scanf("%f", &ly);

    printf("Nhap diem mon Hoa: ");
    scanf("%f", &hoa);

    diemTB = (toan * 3 + ly * 2 + hoa * 1) / (3 + 2 + 1);
    printf("Diem trung binh la: %.2f\n", diemTB);


// BT5. Tinh chu vi, dien tich tam giac vuong

    float a, b, c, chuVitgv=0, dienTichtgv=1;

    printf("Nhap do dai canh a,b,c: ");
    scanf("%f%f%f", &a, &b, &c);

    chuVi = a + b + c;
    dienTich = (a * b) / 2;

    printf("Chu vi tam giac vuong: %.2f\n", chuVitgv);
    printf("Dien tich tam giac vuong: %.2f\n", dienTichtgv);

    return 0;
}
