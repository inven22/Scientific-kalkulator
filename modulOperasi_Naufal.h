#ifndef modulOperasi_Naufal_h
#define modulOperasi_Naufal_h
double pembagian(double angka1, double angka2);
//void tampilPembagian();
float modulus(float angka1, float angka2);
//void tampilModulus();
double mutlak(double angka1);
//void tampilMutlak();

#endif

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

//#define MAX_LENGTH 100


double pembagian(double a, double b) {
    return a / b;
}


float modulus(float a, float b){
	return a % b;
}

double mutlak(double a) {
    if (a < 0) {
        return -a;
    } else {
        return a;
    }
}

//void tampil(){
//	char input[MAX_LENGTH];
//    char* token;
//    double nums[MAX_LENGTH];
//    char ops[MAX_LENGTH];
//    int i, j;
//    double result = 0;
//
//    while (1) {
//        printf("Enter operation (q to quit): ");
//        fgets(input, MAX_LENGTH, stdin);
//        if (input[0] == 'q') {
//            break;
//        }
//
//        i = 0;
//        j = 0;
//        token = strtok(input, " ");
//        while (token != NULL) {
//            if (i % 2 == 0) {
//                nums[j] = atof(token);
//                j++;
//            } else {
//                ops[j - 1] = token[0];
//            }
//            token = strtok(NULL, " ");
//            i++;
//        }
//
//        result = nums[0];
//        for (i = 1; i < j; i++) {
//            if (ops[i - 1] == '+') {
//                result = penjumlahan(result, nums[i]);
//            } else if (ops[i - 1] == '-') {
//                result = pengurangan(result, nums[i]);
//            } else if (ops[i - 1] == '*') {
//                result = perkalian(result, nums[i]);
//            } else if (ops[i - 1] == '/') {
//                result = pembagian(result, nums[i]);
//            } else if (ops[i - 1] == '^') {
//                result = perpangkatan(result, nums[i]);
//            } else if (ops[i - 1] == '%') {
//                result = modulus(result, nums[i]);
//            } else if (ops[i - 1] == 'm') {
//                result = mutlak(result);
//            } 
////			else if (ops[i - 1] == 'r') {
////                result = akar(result);
////            } else if (ops[i - 1] == 's') {
////                result = sinus(result);
////            } else if (ops[i - 1] == 'c') {
////                result = cosinus(result);
////            } else if (ops[i - 1] == 't') {
////                result = tangent(result);
////            }
//        }
//
//        printf("Result = %.2lf\n", result);
//    }
//}
////void tampilPembagian(){
////	int angka1, angka2, hasil;
////	printf("Masukan angka pertama = ");
////	scanf("%d", &angka1);
////	printf("Masukan angka kedua = ");
////	scanf("%d", &angka2);
////	hasil = operasiPembagian(angka1, angka2);
////	printf("Hasil pembagiannya adalah = %d", hasil);
////}
//
////void tampilModulus(){
////	int angka1, angka2, hasil;
////	
////	printf("Masukkan angka pertama anda = ");
////	scanf("%d", &angka1);
////	printf("Masukkan angka kedua anda = ");
////	scanf("%d", &angka2);
////	hasil = operasiModulus(angka1, angka2);
////	printf("Hasil dari modulus %d mod %d adalah %d", angka1, angka2, hasil);
////	//perulangan();
////}
//
//
////void tampilMutlak(){
////	double angka1, hasil;
////	printf("Masukan angka pertama anda = ");
////	scanf("%lf", &angka1);
//////	printf("Masukan angka kedua anda = ");
//////	scanf("%lf", &angka2);
////	hasil = operasiMutlak(angka1);
////	printf("Hasil mutlak nya ada = %lf", hasil);
////}

