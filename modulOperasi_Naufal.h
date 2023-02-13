#ifndef modulOperasi_Naufal_h
#define modulOperasi_Naufal_h
int operasiPembagian(int angka1, int angka2);
void tampilPembagian();
int operasiModulus(int angka1, int angka2);
void tampilModulus();
double operasiMutlak(double angka1);
void tampilMutlak();

#endif

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

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

int operasiModulus(int angka1, int angka2){
	return angka1 % angka2;
}

void tampilModulus(){
	int angka1, angka2, hasil;
	
	printf("Masukkan angka pertama anda = ");
	scanf("%d", &angka1);
	printf("Masukkan angka kedua anda = ");
	scanf("%d", &angka2);
	hasil = operasiModulus(angka1, angka2);
	printf("Hasil dari modulus %d mod %d adalah %d", angka1, angka2, hasil);
	//perulangan();
}

double operasiMutlak(double angka1) {
    if (angka1 < 0) {
        return -angka1;
    } else {
        return angka1;
    }
}

void tampilMutlak(){
	double angka1, hasil;
	printf("Masukan angka pertama anda = ");
	scanf("%lf", &angka1);
//	printf("Masukan angka kedua anda = ");
//	scanf("%lf", &angka2);
	hasil = operasiMutlak(angka1);
	printf("Hasil mutlak nya ada = %lf", hasil);
}

void tampil
