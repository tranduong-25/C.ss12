#include <stdio.h>

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    printf("Nhập số thứ nhất: ");
    scanf("%d", &num1);
    
    printf("Nhập số thứ hai: ");
    scanf("%d", &num2);
    
    int ketQua = tinhTong(num1, num2);
    printf("Tổng của %d và %d là: %d\n", num1, num2, ketQua);
    
    return 0;
}
