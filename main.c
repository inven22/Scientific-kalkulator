#include<stdio.h>
#include<stdlib.h>
#include "ModulOperasiTendy.h"
#include "ModulOperasi_Agista.h"
#include "ModulOperasi_Naufal.h"
#include "ModulOperasi_Mahira.h"
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
			fgets(temp,10,stdin);
			option  = atoi(temp);
			switch(option)	{
				case 1:
					tampilJumlah();
					system("cls");
				break;
				case 2:
					tampilKurang();
					system("cls");
				break;
				case 3:
					tampil_perkalian();
					system("cls");
				break;
				case 4:
					tampilPembagian();
					system("cls");
				break;
				case 5:
					tampil_perpangkatan();
					system("cls");
				break;
				case 6:
					tampilPersen();
					system("cls");
				break;
				default:
			   		option = 0;
				break;
			}
	}while(option != 0);
	return 0;
}
