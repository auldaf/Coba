#include<stdio.h>
int main()
{
	/*inisiasi volume(v),(t),dan kecepatan per jam(r)*/
	float v,w,r;
	
	/*input volume dan waktu*/
		printf("Masukkan volume cairan (ml): ");
		scanf ("%f",&v);
		
		printf ("Masukkan waktu (mnt): ");
		scanf("%f",&w);
	/*input rumus*/
		r=v/(w/60);
		
	/*output hasil VTBI dan kecepatan per jam*/
		printf("VTBI: %.2f ml\n",v);
		printf("Rate: %.2f ml/hr",r);
	
}
