#include<stdio.h>

int main()
{
    const float pi = 3.14;
    float r;
    printf("Nhap b�n k�nh r: "); scanf("%f",&r);
    float cv = 2*pi*r;
    float dt = pi*(r*r);
    printf("Chu vi h�nh tr�n l�: %.2f\n", cv);
    printf("Dien t�ch h�nh tr�n l�: %.2f", dt);
}
