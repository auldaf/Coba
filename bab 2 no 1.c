#include<stdio.h>
int main()
{
	/*inisiasi jarak awal (a) dan jarak akhir(b)*/
	float a,b;
	
	/*input jarak awal dan akhir*/;
		printf ("masukkan jarak awal: ");
		scanf ("%f",&a);
	
		printf ("masukkan jarak akhir: ");
		scanf ("%f",&b);
	
	/*hitung tarif*/
		printf("tarif harga: %.2f$",(b-a)*1.50);
}
