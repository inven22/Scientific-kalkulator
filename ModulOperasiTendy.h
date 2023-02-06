#ifndef ModulOperasi_Tendy_h
#define ModulOperasi_Tendy_h

void tampil_perpangkatan();
int Perpangkatan(int bilangan, int pangkat);
int Perkalian(int bilangan1, int bilangan2);
void tampil_perkalian();

#endif
#include<stdio.h>



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
 void tampil_perpangkatan(){
 	int bilangan1, pangkat,hasil;
	printf("masukkan bilangan:");
	scanf("%d",&bilangan1);
	printf("masukkan pangkat:");
	scanf("%d",&pangkat);
	hasil=Perpangkatan(bilangan1,pangkat);\
	printf("hasilnya adalah %d",hasil);
	printf("\n");
	
 }
int Perkalian(int bilangan1, int bilangan2){
 	return bilangan1*bilangan2;
 }
 void tampil_perkalian(){
 	int bilangan1,bilangan2, pangkat,hasil;
	printf("masukkan bilangan 1 :");
	scanf("%d",&bilangan1);
	printf("masukkan bilangan 2 :");
	scanf("%d",&bilangan2);
	hasil=Perkalian(bilangan1,bilangan2);\
	printf("hasilnya adalah %d",hasil);
	printf("\n");
 }
