#include <stdio.h>


struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    
    struct SinhVien sv;
    printf("Nhap ten cuar sinh vien.");
    fgets(sv.name,sizeof(sv.name),stdin);
    printf("Nhap tuoi cua sinh vien");
    scanf("%d",&sv.age);
    printf("Nhap so dien thoai cua sinh vien");
    fgets(sv.phoneNumber,sizeof(sv.phoneNumber),stdin);

    printf("Thong tin sinh vien:\n");
    printf("Ten: %s\n", sv.name);
    printf("Tuoi: %d\n", sv.age);
    printf("So dien thoai: %s\n", sv.phoneNumber);

    return 0;
}

