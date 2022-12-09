#include<stdio.h>
int main()
{
	/*inisiasi waktu(t) dan suhu(T) jam(h)menit(m)*/
	float t,T,h,m;

	/*input suhu,waktu,jam,menit*/
		printf("masukkan jam: ");
		scanf ("%f", &h); 
		
		printf("masukkan menit: ");
		scanf ("%f", &m);

	/*rumus yang digunakan untuk mencari suhu(t) dan waktu (T)*/
		t= h+(m/60);
		T=4*t*t/(t+2)-20;
	
	/*output suhu akhir*/
		printf("estimasi suhu akhir adalah: %.2f",T);
}
