#include<stdio.h>

int main()
{
    int n;
    printf("Nhap 1 so có 4 chu so: ") ; scanf("%d",&n);
    int num1 = n/1000;
    int num2 = (n%1000)/100;
    int num3 = ((n%1000)%100)/10;
    int num4 = (((n%1000)%100)%10);
    printf("%d%d%d%d",num4,num3,num2,num1);
}
