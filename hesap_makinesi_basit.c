#include <stdio.h>

int main(){

int s1,s2,islem;

printf("Sayi 1 :");
scanf("%d",&s1);
printf("Sayi 2 :");
scanf("%d",&s2);

printf("\n1 - Toplama\n2 - Cikarma\n3 - Carpma\n4 - Bolme\n\nIslem : ");
scanf("%d",&islem);

switch(islem){

        case 1:
                printf("Sonuc : %d",s1+s2);
                break;
        case 2:
                printf("Sonuc : %d",s1-s2);
                break;
        case 3:
                printf("Sonuc : %d",s1*s2);
                break;
        case 4:
                printf("Sonuc : %f",s1/s2);
                break;
        default:
                printf("Yanlis Giris");
                break;
}

getch();

return 0;
}