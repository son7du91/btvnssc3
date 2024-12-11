#include<stdio.h>

int main()
{
    int n;
    printf("Nhap 1 so có 4 ch? so: ") ; scanf("%d",&n);
    int sum = n/1000 + (n%1000)/100 + ((n%1000)%100)/10 + (((n%1000)%100)%10);
    printf("%d",sum);
}
