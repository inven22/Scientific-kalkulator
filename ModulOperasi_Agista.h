#ifndef ModulOperasi_Agista_h
#define Moduloperasi_Agista_h


float jumlah(float bil1, float bil2);
float kurang(float bil1, float bil2);
void tampilJumlah();
void tampilKurang();

#endif

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float jumlah(float bil1, float bil2){
	float hasil;
	printf("Masukan bilangan pertama :");
	scanf("%f", &bil1);
	printf("Masukan bilangan kedua :");
	scanf("%f", &bil2);
	hasil=bil1+bil2;
	return hasil;
}

float kurang(float bil1, float bil2){
	float hasil;
	printf("Masukan bilangan pertama :");
	scanf("%f", &bil1);
	printf("Masukan bilangan kedua :");
	scanf("%f", &bil2);
	hasil=bil1-bil2;	
	return hasil;
}

void tampilJumlah(){
	float bil1, bil2, hasilJumlah;
	hasilJumlah=jumlah(bil1, bil2);
	printf("Hasil dari penjumlahan : %f\n", hasilJumlah);
}

void tampilKurang(){
	float bil1, bil2, hasilKurang;
	hasilKurang=kurang(bil1, bil2);
	printf("Hasil dari pengurangan : %f\n", hasilKurang);
}
