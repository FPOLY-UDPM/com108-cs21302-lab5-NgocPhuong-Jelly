/******************************************************************************
 * Họ và tên: [Trần Thị Ngọc Phương]
 * MSSV:      [PS48607]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include <stdio.h>

void hoanVi(int *a, int *b) {
    int tam;
    
    tam = *a;
    *a = *b;
    *b = tam;
}

int main() {
    int a, b;

    printf("Nhập giá trị a: ");
    scanf("%d", &a);
    printf("Nhập giá trị b: ");
    scanf("%d", &b);
    printf("\n--- TRƯỚC KHI HOÁN VỊ ---\n");
    printf("a = %d, b = %d\n", a, b);
    hoanVi(&a, &b);
    printf("\n--- SAU KHI HÓAN VỊ ---\n");
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}
