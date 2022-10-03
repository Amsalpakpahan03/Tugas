#include <stdio.h>

int main(){
	int angka;
	printf ("masukkan angka = ");
	scanf ("%d", &angka);

	if (angka% 2==0)
	{
	printf ("angka%d adalah bilangan genap\n", angka);
	}
	else            
	{
	printf("angka%d adalah bilangan ganjil\n", angka);
    }

}
