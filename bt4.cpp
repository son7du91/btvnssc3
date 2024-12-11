#include <stdio.h>

int main()
{
    float t, v, a;
    printf("Nhap diem toán: "); scanf("%f", &t);
    printf("Nhap diem van: "); scanf("%f", &v);
    printf("Nhap diem anh: "); scanf("%f", &a);
    float sum = t + v + a;
    float average = sum /3 ;
    printf("Tang diem 3 môn là: %.2f", sum);
    printf("Ðiem trung bình 3 môn là: %.2f", average);
}
