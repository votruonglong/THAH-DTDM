#include <stdio.h>
#include <math.h>

int is_chinh_phuong(int num) {
    int sqrt_num = sqrt(num);
    return (sqrt_num * sqrt_num == num);
}

int dem_so_chinh_phuong(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (is_chinh_phuong(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");
    return count;
}

int main() {
    int n = 50;
    printf("Cac so chinh phuong nho hon %d la: ", n);
    int so_luong = dem_so_chinh_phuong(n);
    printf("Tong so chinh phuong: %d\n", so_luong);
    return 0;
}
