#ifndef ModulOperasi_Agista_h
#define Moduloperasi_Agista_h
#define phi 3.14

float penjumlahan(float bil1, float bil2);
float pengurangan(float bil1, float bil2);
float sinus(float degree);
float cosinus(float degree);
float tangen(float degree);
float pembulatan(float num);
//void tampilJumlah();
//void tampilKurang();
//void tampilSin();
//void tampilCos();
//void tampilTan();
//void tampilPembulatan();

#endif

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

<<<<<<< HEAD
float penjumlahan(float bil1, float bil2) {
    return bil1 + bil2;
}

float pengurangan(float bil1, float bil2) {
    return bil1 - bil2;
=======
double penjumlahan(double a, double b) {
    return a + b;
}

double pengurangan(double a, double b) {
    return a - b;
>>>>>>> 94ae6c17ea263612bb510af3b8e47f3aca8355a2
}

float sinus(float degree){
	float hasil;
	hasil = (sin(degree*(phi/180)));
	return hasil;
}

float cosinus(float degree){
	float hasil;
	hasil = (cos(degree*(phi/180)));
	return hasil;
}

float tangen(float degree){
	float hasil;
	hasil = (tan(degree*(phi/180)));
	return hasil;
}

float pembulatan(float num){
    return round(num);
}

//void tampilSin(){
//	float degree, hasilSin;
//	hasilSin=sinus(degree);
//	printf("sin nilai tersebut adalah : %f\n ", hasilSin);
//} 
//
//void tampilCos(){
//	float degree, hasilCos;
//	hasilCos=cosinus(degree);
//	printf("cos nilai tersebut adalah : %f\n ", hasilCos);
//} 
//
//void tampilTan(){
//	float degree, hasilTan;
//	hasilTan=tangen(degree);
//	printf("tan nilai tersebut adalah : %f\n ", hasilTan);
//} 
//
//void tampilJumlah(){
//	float bil1, bil2, hasilJumlah;
//	hasilJumlah=jumlah(bil1, bil2);
//	printf("Hasil dari penjumlahan : %f\n", hasilJumlah);
//}
//
//void tampilKurang(){
//	float bil1, bil2, hasilKurang;
//	hasilKurang=kurang(bil1, bil2);
//	printf("Hasil dari pengurangan : %f\n", hasilKurang);
//}
//
//void tampilPembulatan(){
//	double num;
//	double hasil;
//	printf("\nMasukan floating-point number : ");
//    scanf("%lf", &num);
//    hasil=pembulatan(num);
//    printf("Nilai pembulatan : %.0lf\n", hasil);
//}
