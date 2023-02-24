#ifndef ModulOperasi_Mahira_H
#define ModulOperasi_Mahira_H
#define phi 3.14159265358979323846

float persen(float bil);
//void tampilPersen();
float faktorial(float bil);
//void tampilFaktorial();
float asinus(float bil);
float acosinus(float bil);
float atangen(float bil);

#endif

#include <stdio.h>
#include <math.h>

float persen(float bil)
{
	return bil/100;
}


float faktorial(float bil)
{
//	scanf("%d", &bil);
	if(bil == 0)
	{
		return 1;
	}
	else
	{
		int result = 1, i = 0;
		while(i < bil)
		{
			result = result*(bil-i);
			i++;
		}
		return result;	
	}
}

float asinus(float bil)
{
	return asin(bil)*(180/phi);
}

float acosinus(float bil)
{
	return acos(bil)*(180/phi);
}

float atangen(float bil)
{
	return atan(bil)*(180/phi);
}

//void tampilPersen()
//{
//	float bil1, per1, hasil;
//	hasil = persen(bil1, per1);
//	printf("%.2f", hasil);
//}

//void tampilFaktorial()
//{
//	int jumlah, angka;
//	jumlah = faktorial(angka);
//	printf("%d", jumlah);
//}
