#ifndef moduloperasiAhmad_h
#define moduloperasiAhmad_h

int loga(int number);
void tampil();
int log_a_to_base_b(int a, int b);
#endif

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int loga(int number) 
{
	return log10(number);
}


//void tampillg()
//{
//	double angka = 0, hasil;
//	printf("Masukkan angka : ");
//	scanf("%lf", &angka);
//	hasil=loga(angka);
//	printf("hasil log =%.2lf", hasil);
//}
int log_a_to_base_b(int a, int b)
{
    return log2(a) / log2(b);
}

void tampil(){
	float hasil, a,b;
	a=4;
	b=2;
	hasil = log_a_to_base_b(a,b);
	printf("%f",hasil);
}


//double naturalloga(double number)
//{
//	return log(number);
//}
//
//void resultloga(double result)
//{
//  printf("Hasil : %lf",result);
//}


//void tampillg()
//{
//	double angka = 0, hasil;
//	printf("Masukkan angka : ");
//	scanf("%lf", &angka);
//	hasil=loga(angka);
//	printf("hasil log =%.2lf", hasil);
//}



//double naturalloga(double number)
//{
//	return log(number);
//}
//
//void resultloga(double result)
//{
//  printf("Hasil : %lf",result);
//}
