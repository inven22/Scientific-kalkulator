#ifndef header_H
#define header_H

float persen(float bil, float per);
void tampilPersen();

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
