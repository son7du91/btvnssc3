#include <stdio.h>

int main()
{
    float t, v, a;
    printf("Nhap diem to�n: "); scanf("%f", &t);
    printf("Nhap diem van: "); scanf("%f", &v);
    printf("Nhap diem anh: "); scanf("%f", &a);
    float sum = t + v + a;
    float average = sum /3 ;
    printf("Tang diem 3 m�n l�: %.2f", sum);
    printf("�iem trung b�nh 3 m�n l�: %.2f", average);
}
