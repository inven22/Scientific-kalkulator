#ifndef modul_naufal_h
#define modul_naufal_h
int operasiPembagian(int angka1, int angka2);
void tampilPembagian();

#endif

#include <stdio.h>
#include <stdlib.h>
int operasiPembagian(int angka1, int angka2){
	return angka1/angka2;
}

void tampilPembagian(){
	int angka1, angka2, hasil;
	printf("Masukan angka pertama = ");
	scanf("%d", &angka1);
	printf("Masukan angka kedua = ");
	scanf("%d", &angka2);
	hasil = operasiPembagian(angka1, angka2);
	printf("Hasil pembagiannya adalah = %d", hasil);
}
