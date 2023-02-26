 #ifndef MOdulOperasi_Mahira_H
#define MOdulOperasi_Mahira_H

int persen(int bil, int per);
//void tampilPersen();
int faktorial(int bil);
//void tampilFaktorial();

#endif

#include <stdio.h>
#include <math.h>

int persen(int bil, int per)
{
	double result;
	result = bil * per/100;
	return result;
}


int faktorial(int a)
{
	scanf("%d", &a);
	if(a == 0)
	{
		return 1;
	}
	else{
		int result = 1, i = 0;
		while(i < a)
		{
			result = result*(a-i);
			i++;
		}
		return result;	
	}
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
