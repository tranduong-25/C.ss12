#include <stdio.h>

int kiemTraSNT(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num1, num2;

    printf("Nhập số nguyên thứ nhất: ");
    scanf("%d", &num1);

    printf("Nhập số nguyên thứ hai: ");
    scanf("%d", &num2);

    if (kiemTraSNT(num1)) {
        printf("%d là số nguyên tố.\n", num1);
    } else {
        printf("%d không phải là số nguyên tố.\n", num1);
    }

    if (kiemTraSNT(num2)) {
        printf("%d là số nguyên tố.\n", num2);
    } else {
        printf("%d không phải là số nguyên tố.\n", num2);
    }

    return 0;
}
