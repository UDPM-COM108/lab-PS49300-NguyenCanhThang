#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int luachon;

    do {
        printf("__________________________________________\n");
        printf("|WELCOME TO NGUYENCANHTHANG BTLAB3 COM108|\n");
        printf("--------------------MENU------------------\n");
        printf("1. Chuc nang tinh hoc luc\n");
        printf("2. Chuc nang tinh bac nhat\n");
        printf("3. Chuc nang tinh bac hai\n");
        printf("4. Chuc nang tinh tien dien\n");
        printf("==========================================\n");
        printf("0. Exit\n");
        printf("\nMoi ban nhap lua chon chuong trinh: ");

        if (scanf("%d", &luachon) != 1) {
            printf("Nhap khong hop le. Thoat chuong trinh.\n");
            return 0;
        }

        switch (luachon) {
        case 1: {
            printf("Tinh hoc luc\n");
            double dtb;
            printf("Nhap diem trung binh: ");
            scanf("%lf", &dtb);

            if (dtb >= 9)
                printf("\nXuat sac");
            else if (dtb >= 8)
                printf("Gioi");
            else if (dtb >= 7)
                printf("Kha");
            else if (dtb >= 5)
                printf("Trung binh");
            else
                printf("Yeu");
            }
            break;

        case 2: {
            printf("Tinh chuong trinh bac 1\n");
            printf("Nhap vao a va b: ");
            int a, b;
            scanf("%d %d", &a, &b);

            if (a == 0) {
                if (b == 0) {
                    printf("\nPhuong trinh vo so nghiem");
                } else {
                    printf("\nPhuong trinh vo nghiem");
                }
            } else {
                double x = - (double)b / a;
                printf("\nPhuong trinh co 1 nghiem duy nhat: %.2f", x);
            }
            }
            break;

        case 3: {
            printf("\nNhap vao a,b,c: ");
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);

            if (a == 0) {
                if (b == 0) {
                    if (c == 0) {
                        printf("Phuong trinh vo so nghiem");
                    } else {
                        printf("Phuong trinh vo nghiem");
                    }
                } else {
                    double x = - (double)c / b;
                    printf("Phuong trinh co 1 nghiem: %.2f", x);
                }
            } else {
                double delta = (double)b * b - 4 * a * c;

                if (delta < 0) {
                    printf("Phuong trinh khong co nghiem thuc");
                } else if (delta == 0) {
                    double x = - (double)b / (2.0 * a);
                    printf("Phuong trinh co nghiem kep: %.6f", x);
                } else {
                    double x1 = (-(double)b + sqrt(delta)) / (2.0 * a);
                    double x2 = (-(double)b - sqrt(delta)) / (2.0 * a);
                    printf("\nNghiem thu nhat x1 = %.2f", x1);
                    printf("\nNghiem thu hai x2 = %.2f", x2);
                }
            }
            }
            break;

        case 4: {
            double kwh;
            printf("\nTinh tien dien\n");
            printf("Nhap so dien tieu thu (kWh): ");

            if (scanf("%lf", &kwh) != 1) {
                printf("Nhap khong hop le.\n");
                break;
            }
            if (kwh < 0) {
                printf("So dien phai lon hon hoac bang 0.\n");
                break;
            }

            double total = 0.0;

            if (kwh <= 50.0) {
                total = kwh * 1678.0;
            } else if (kwh <= 100.0) {
                total = 50.0 * 1678.0 + (kwh - 50.0) * 1734.0;
            } else if (kwh <= 200.0) {
                total = 50.0 * 1678.0 + 50.0 * 1734.0 + (kwh - 100.0) * 2014.0;
            } else if (kwh <= 300.0) {
                total = 50.0 * 1678.0 + 50.0 * 1734.0 + 100.0 * 2014.0 + (kwh - 200.0) * 2536.0;
            } else if (kwh <= 400.0) {
                total = 50.0 * 1678.0 + 50.0 * 1734.0 + 100.0 * 2014.0 + 100.0 * 2536.0 + (kwh - 300.0) * 2834.0;
            } else {
                total = 50.0 * 1678.0 + 50.0 * 1734.0 + 100.0 * 2014.0 +
                        100.0 * 2536.0 + 100.0 * 2834.0 + (kwh - 400.0) * 2927.0;
            }

            printf("Tieu thu: %.2f kWh\n", kwh);
            printf("Tong tien dien phai dong: %.0f VND\n", total);
            }
            break;

        case 0:
            printf("\nSee you again!\n");
            exit(0);

        default:
            printf("\nKhong hop le. Moi nhap lai so 1-4\n");
            break;
        }

    } while (luachon != 0);

    return 0;
}
