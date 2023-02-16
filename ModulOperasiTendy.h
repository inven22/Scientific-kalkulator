#ifndef ModulOperasi_Tendy_h
#define ModulOperasi_Tendy_h

//void tampil_perpangkatan();
int Perpangkatan(int bilangan, int pangkat);
int Perkalian(int bilangan1, int bilangan2);
//void tampil_perkalian();
//void input(char *operasi);
//void input_matriks();
double akar_pangkat_n(int power,int konst);
//void tampil_akar();
#endif
#include<stdio.h>
#include<math.h>



int Perpangkatan(int bilangan, int pangkat){
 	int hasil,i;
 	hasil=1;
 	i=1;
 	if(bilangan!=0&&pangkat!=0){
	 
 	while(i<=pangkat){
 		hasil=hasil*bilangan;
 		i++;
	 } 
 	return hasil;
 	}else if(bilangan!=0&&pangkat==0){
 		return 1;
	}else{
	 	return 0;
	}
 	
 }
int Perkalian(int bilangan1, int bilangan2){
 	return bilangan1*bilangan2;
 }
 
int akarPangkatN(int power,int konst){
//	int a;
	double result;

    result = pow(konst, 1.0/power);
	return result;
}
 
// void tampil_perkalian(){
// 	int bilangan1,bilangan2, pangkat,hasil;
//	printf("masukkan bilangan 1 :");
//	scanf("%d",&bilangan1);
//	printf("masukkan bilangan 2 :");
//	scanf("%d",&bilangan2);
//	hasil=Perkalian(bilangan1,bilangan2);\
//	printf("hasilnya adalah %d",hasil);
//	printf("\n");
// }
// void tampil_perpangkatan(){
// 	int bilangan1, pangkat,hasil;
//	printf("masukkan bilangan:");
//	scanf("%d",&bilangan1);
//	printf("masukkan pangkat:");
//	scanf("%d",&pangkat);
//	hasil=Perpangkatan(bilangan1,pangkat);\
//	printf("hasilnya adalah %d",hasil);
//	printf("\n");
//	
// }

// 
// void input(char *operasi){
//	printf("masukkan operasi:");
//	scanf("%40s",&*operasi);
//	printf("\n");
////	printf("%s",operasi);
//}

//void tampil_akar(){
//	double x, root;
//    int n;
//
//    printf("masukkan angka: ");
//    scanf("%lf", &x);
//
//    printf("akar pangkat ke-: ");
//    scanf("%d", &n);
//    root=akar_pangkat_n(n,x);
//    printf("hasilnya adalah %.2lf",root);
//}


//void input_matriks(){
//	int baris,kolom,i=0,j=0,k;
//	int matriks[baris][kolom];
//	printf("masukkan baris matriks");
//	scanf("%d",&baris);
//	printf("masukkan kolom matriks");
//	scanf("%d",&kolom);
//
//for(int i=0;i>baris+1;i++){
//	for(int j=0;j>kolom+1;j++){
//		printf("masukkan matriks ke %d,%d:",i,j);
//		scanf("%d",&k);
//		matriks[i][j]=k;
//}
//}
//}
