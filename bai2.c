/******************************************************************************
 * Họ và tên: [Trần Thị Ngọc Phương]
 * MSSV:      [PS48607]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include <stdio.h>

int nam_nhuan(int nam) {
    if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) {
        return 1;
    }
    return 0;
}

int main() {
    int nam;

    printf("Nhập vào năm: ");
    scanf("%d", &nam);

    if (nam_nhuan(nam)) {
        printf("%d là năm nhuận.\n", nam);
    } else {
        printf("%d không phải là năm nhuận.\n", nam);
    }
    
    return 0;
}
