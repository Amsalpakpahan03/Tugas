#include<stdio.h>

int main(){

    int a,b,c;
    printf("selamat datang di kalkulator sederhana");
    printf("\n1. penjumlahan");
    printf("\n2. perkalian");
    printf("\n3. pembagian");
    printf("\n4. pengurangan");
    printf("\nmasukan pilihan anda : ");
    scanf("%i",&a);

    switch(a){
    case 1:
	printf("\nangka 1 : ");
	scanf("%i", &b);
	printf("\nangka 2 : ");
	scanf("%i", &c);
	printf("hasil penjumlahan %i",(b+c));
	break;

	case 2:
	printf("\nangka 1 : " );
	scanf("%i", &b);
	printf("\nangka 2 : ");
	scanf("%i", &c);
	printf("hasil perkalian %i",(b*c));
	break;

	case 3:
	printf("\nangka 1 : " );
	scanf("%i", &b);
	printf("\nangka 2 : ");
	scanf("%i", &c);
	printf("hasil pembagian %i",(b/c));
	break;

	case 4:
	printf("\nangka 1 : " );
	scanf("%i", &b);
	printf("\nangka 2 : ");
	scanf("%i", &c);
	printf("hasil pengurangan %i",(b-c));
	break;

	}
}
