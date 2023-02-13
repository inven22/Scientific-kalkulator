#ifndef modulOperasi_Ahmad_h
#define modulOperasi_Ahmad_h



#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double loga(double number) 
{
	return log10(number);
}
void tampillg()
{
	double angka = 0,hasil;
	printf("Masukkan angka : ");
	scanf("%lf", &angka);
	hasil=loga(angka);
	printf("hasil log =%.2lf",hasil);
}



double naturalloga(double number)
{
	return log(number);
}

void resultloga(double result)
{
  printf("Hasil : %lf",result);
}

int main(){
	tampillg();
	
	return 0;
}
