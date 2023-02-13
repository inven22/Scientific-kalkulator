#ifndef MOdulOperasi_Mahira_H
#define MOdulOperasi_Mahira_H

float persen(float bil, float per);
void tampilPersen();
int faktorial(int bil);
void tampilFaktorial();

#endif

#include <stdio.h>
#include <math.h>

float persen(float bil, float per)
{
	float hasil;
	printf("kalkulator persen\n");
	printf("Masukkan angka ");
	scanf("%f", &bil);
	printf("Masukkan persen ");
	scanf("%f", &per);
	hasil = bil * per/100;
	return hasil;
}

void tampilPersen()
{
	float bil1, per1, hasil;
	hasil = persen(bil1, per1);
	printf("%.2f", hasil);
}

int faktorial(int bil)
{
	scanf("%d", &bil);
	if(bil == 0)
	{
		return 1;
	}
	else{
		int hasil = 1, i = 0;
		while(i < bil)
		{
			hasil = hasil*(bil-i);
			i++;
		}
		return hasil;	
	}
}

void tampilFaktorial()
{
	int jumlah, angka;
	jumlah = faktorial(angka);
	printf("%d", jumlah);
}
