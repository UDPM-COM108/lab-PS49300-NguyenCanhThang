#include <stdio.h>
#include <string.h>

struct nhanvien {
    int MANV;
    char HoTen[50];
    int SoNgayCong;
    int Luong;
};

void TinhLuong(struct nhanvien *nv) {
    int snc = nv->SoNgayCong;
    int luong1Ngay = 1500000 / 25;

    if (snc == 25) {
        nv->Luong = 1500000;
    }
    else if (snc < 25) {
        nv->Luong = 1500000 * 0.9;
    }
    else {
        int du = snc - 25;
        nv->Luong = 1500000 + du * luong1Ngay * 2;
    }
}

void nhapNV(struct nhanvien ds[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Nhap nhan vien %d ---\n", i + 1);
        printf("Ma NV: ");
        scanf("%d", &ds[i].MANV);
        getchar();
        printf("Ho Ten: ");
        fgets(ds[i].HoTen, sizeof(ds[i].HoTen), stdin);
        ds[i].HoTen[strcspn(ds[i].HoTen, "\n")] = '\0'; // xóa xuống dòng

        printf("So Ngay Cong: ");
        scanf("%d", &ds[i].SoNgayCong);

        // gọi hàm tính lương
        TinhLuong(&ds[i]);
    }
}

void xuatNV(struct nhanvien ds[], int n) {
    printf("\n%-10s %-20s %-15s %-15s\n",
           "MANV", "HoTen", "SoNgayCong", "Luong");

    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-15d %-15d\n",
               ds[i].MANV, ds[i].HoTen, ds[i].SoNgayCong, ds[i].Luong);
    }
}

void sapXep(struct nhanvien ds[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].MANV > ds[j].MANV) {
                struct nhanvien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

int main() {
    int n = 5;
    struct nhanvien ds[5];

    nhapNV(ds, n);

    printf("\nDanh sach nhan vien vua nhap\n");
    xuatNV(ds, n);

    sapXep(ds, n);

    printf("\nDanh sach nhan vien sau khi sap xep theo MANV \n");
    xuatNV(ds, n);

    return 0;
}
