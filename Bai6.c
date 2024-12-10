#include <stdio.h>

int kiemTraSoHoanHao(int n) {
    if (n <= 1) {
        return 0;
    }

    int tong = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }

    if (tong == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num1, num2;

    printf("Nhập số nguyên thứ nhất: ");
    scanf("%d", &num1);

    printf("Nhập số nguyên thứ hai: ");
    scanf("%d", &num2);

    if (kiemTraSoHoanHao(num1)) {
        printf("%d là số hoàn hảo.\n", num1);
    } else {
        printf("%d không phải là số hoàn hảo.\n", num1);
    }

    if (kiemTraSoHoanHao(num2)) {
        printf("%d là số hoàn hảo.\n", num2);
    } else {
        printf("%d không phải là số hoàn hảo.\n", num2);
    }

    return 0;
}
