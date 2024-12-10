#include <stdio.h>

int tinhGiaiThua(int n) {
    int ketQua = 1;
    for (int i = 1; i <= n; i++) {
        ketQua *= i;
    }
    return ketQua;
}

int main() {
    int n;

    printf("Nhập một số nguyên: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Giai thừa không xác định cho số âm.\n");
    } else {
        int giaiThua = tinhGiaiThua(n);
        printf("Giai thừa của %d là: %d\n", n, giaiThua);
    }

    return 0;
}
