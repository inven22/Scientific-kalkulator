//Ahmad al fajri

#include<stdio.h>
#include<stdlib.h>
#include "ModulOperasi_Tendy.h"
#include "ModulOperasi_Agista.h"
#include "ModulOperasi_Naufal.h"
#include "ModulOperasi_Mahira.h"
#include "ModulOperasiAhmad.h"

int main()	{
	char operasi[100];
	double hasil;
	printf("enter ekspresi");
	fgets(operasi,100,stdin);
	hasil=evaluasi_ekspresi(operasi);
	printf("hasil :%lf",hasil);
	return 0;
}
