#include<stdio.h>
#include<stdlib.h>

int main()	{
	int opcion;
	char temp[10];
	do	{
			printf("--------------------------------------------------------------");
			printf("\n ===========>    Scientific Calculator  <==================\n");
		    printf("==============================================================");
		    printf("\n\n\n");
			printf("1).test\n");
			fgets(temp,10,stdin);
			opcion  = atoi(temp);
			switch(opcion)	{
				case 1:
				system("pause");
				break;
				case 2:
				   system("pause");
				break;
				case 3:
				system("pause");
				break;
				case 4:
				system("pause");
				break;
				default:
			   	system("pause");
				break;
			}
	}while(opcion != 4);
	return 0;
}
