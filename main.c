//Ahmad al fajri

#include<stdio.h>
#include<stdlib.h>
#include "ModulOperasiTendy.h"
#include "ModulOperasi_Agista.h"
#include "ModulOperasi_Naufal.h"
#include "ModulOperasi_Mahira.h"
#include "ModulOperasi_Ahmad.h"
int main()	{
	int option;
	char temp[10];
	do	{
			printf("--------------------------------------------------------------");
			printf("\n ===========>    Scientific Calculator  <==================\n");
		    printf("==============================================================");
		    printf("\n\n\n");
			printf("1).Penjumlahan\n");
			printf("2).Pengurangan\n");
			printf("3).Perkalian\n");
			printf("4).Pembagian\n");
			printf("5).Perpangkatan\n");
			printf("6).Persen\n");
		        printf("7).akar\n");
		        printf("8).Pembulatan\n");
		        printf("9).Faktorial\n");
		        printf("10).Modulus\n");
		        printf("11).Mutlak\n");
		        printf("12).Logaritma\n");
			fgets(temp,10,stdin);
			option  = atoi(temp);
			switch(option)	{
				case 1:
					tampilJumlah();
					system("pause");
				break;
				case 2:
					tampilKurang();
					system("pause");
				break;
				case 3:
					tampil_perkalian();
					system("pause");
				break;
				case 4:
					tampilPembagian();
					system("pause");
				break;
				case 5:
					tampil_perpangkatan();
					system("pause");
				break;
				case 6:
					tampilPersen();
					system("pause");
				break;
				case 7:
					tampil_akar();
					system("pause");
				break;
				case 8:
					tampilPembulatan();
					system("pause");
				break;
				case 9:
					tampilFaktorial();
					system("pause");
				break;
				case 10:
					tampilModulus();
					system("pause");
				break;
				case 11:
					tampilMutlak();
					system("pause");
				break;
				case 12:
					tampil();
					system("pause");
				break;
				default:
			   		option = 0;
				break;
			}
	}while(option != 0);
	return 0;
}
