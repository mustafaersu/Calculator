#include <stdio.h>
#include <stdlib.h>
void toplama(int a,int b){
printf("\n%d ile %d toplami %d eder.",a,b,a+b);
}
void cikarma(int a,int b){
printf("\n%d ile %d farki %d eder.",a,b,a-b);
}
void carpma(int a,int b){
printf("%\n%d ile %d carpimi %d eder.",a,b,a*b);
}
void bolme(int a,int b){
printf("\n%d ile %d bolumu %d eder.",a,b,a/b);
}
int main()
{
    printf("\n1. Toplama\n2. Cikarma\n3. Carpma\n4. Bolme\n");
    int sayi1,sayi2,islem;
    printf("\n1. Sayi: ");
    scanf("%d",&sayi1);
    printf("\n2. Sayi: ");
    scanf("%d",&sayi2);
    printf("\nIslem Seciniz: ");
    scanf("%d",&islem);
    switch(islem){
    case 1:
        toplama(sayi1,sayi2);
        break;
    case 2:
        cikarma(sayi1,sayi2);
        break;
    case 3:
        carpma(sayi1,sayi2);
        break;
    case 4:
        bolme(sayi1,sayi2);
        break;
    default:
        printf("Lutfen gecerli bir islem giriniz.");

    }
    return 0;
}
