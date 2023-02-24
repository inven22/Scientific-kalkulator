#ifndef ModulOperasi_Tendy_h
#define ModulOperasi_Tendy_h
#define phi 3.14
#define MAX_LENGTH 100
//kamus
typedef struct{
int top_operator,top_operand;
char oprtr[MAX_LENGTH];
float operand[MAX_LENGTH];
}Stack;
//
void tampil_perpangkatan();
float Perpangkatan(float bilangan, float pangkat);
int Perkalian(int bilangan1, int bilangan2);
void tampil_perkalian();
void input(char *operasi);
void input_matriks();
double akar_pangkat_n(int power,double konst);
void tampil_akar();
void push_oprtr(Stack *s,char item);
void push_operand(Stack *s,float item);
float pop_operand(Stack *s);
int pop_oprtr(Stack *s);
int is_operator(char c);
int getpriority(char x);
float evaluasi_ekspresi(char* ekspresi);


//void tampil_perpangkatan();

int Perkalian(int bilangan1, int bilangan2);
//void tampil_perkalian();
//void input(char *operasi);
//void input_matriks();
//double akar_pangkat_n(int power,int konst);
//void tampil_akar();

#endif
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
#include <ctype.h>



float factorial(float bil){
	int i=0;
	if(bil==0){
		return 1;
	}else{
	int hasil=1;
	while(i<bil){
		hasil=hasil*(bil-i);
		i++;
	}return hasil;
	}
}
float Perpangkatan(float bilangan, float pangkat){
 	float hasil,i;
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

void push_oprtr(Stack *s,char item){
	 if (s->top_operator < MAX_LENGTH - 1) {
        s->top_operator++;
        s->oprtr[s->top_operator] = item;
    } else {
        printf("Stack is full\n");
    }
}
void push_operand(Stack *s,float item){
	 if (s->top_operand < MAX_LENGTH - 1) {
        s->top_operand++;
        s->operand[s->top_operand] = item;
    } else {
        printf("Stack is full\n");
    }
}

float pop_operand(Stack *s){
	 if (s->top_operand >= 0) {
        float item = s->operand[s->top_operand];
        s->top_operand--;
        return item;
    } else {
        printf("Stack is empty\n");
        return -1;
    }
}

int pop_oprtr(Stack *s){
	 if (s->top_operator >= 0) {
        char item = s->oprtr[s->top_operator];
        s->top_operator--;
        return item;
    } else {
        printf("Stack is empty\n");
        return -1;
    }
}

int is_operator(char c){
	if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^'||c=='s'||c=='c'||c=='t'||c=='!'){
		return 1;
	}else{
		return 0;
	}
}
int getpriority(char x){
	if(x=='('){
		return 0;
	}else if(x=='+'||x=='-'){
		return 1;
	}else if(x=='*'||x=='/'){
		return 2;
	}else if(x=='^'){
		return 3;
	}else if(x=='s'){
		return 3;
	}else if(x=='!'){
		return 4;
	}
	
}

float evaluasi_ekspresi(char* ekspresi){
	Stack s;	
	s.top_operand=-1;
	s.top_operator=-1;
	char token,x;
	int i=0;
	float num=0,num2;
	char op;
	float opr1,opr2;
	float hasil;
	token=ekspresi[i];
	for(i=0;ekspresi[i];i++){
		token=ekspresi[i];
		if(isdigit(token)||token=='.'){
			if(isdigit(token)){
			num=num*10+(token-'0');
			}else if(token=='.'){
			num2=(ekspresi[i+1]-'0');
			num2=num2/10;
			num=num+num2;	
			i++;
			}
			 if(isdigit(ekspresi[i+1])!=1&&ekspresi[i+1]!='.'){
				push_operand(&s,num);
				num=0;
			}
		}else if(token=='('){
			push_oprtr(&s,token);
		}else if(token==')'){
			while((x=pop_oprtr(&s))=='('){
				push_operand(&s,x);
			}
		}else if(is_operator(token)){
			while(s.top_operator>=0&&(getpriority(s.oprtr[s.top_operator]))>=(getpriority(token))){
				
				op=pop_oprtr(&s);
				opr1=pop_operand(&s);
				if(s.top_operand>=0){
				opr2=pop_operand(&s);
				}
				switch(op){
					case'+':
						hasil=opr2+opr1;
						break;
					case'-':
						hasil=opr2-opr1;
						break;
					case'*':
						hasil=opr2*opr1;
						break;
					case'/':
						hasil=opr2/opr1;
						break;
					case'^':
						hasil=pow(opr2,opr1);
						break;
					case's':
					  	hasil=sin(opr1*phi/180);
					  	break;
					case'!':
						hasil=factorial(opr1);
						break;
			 }
				push_operand(&s,hasil);
				fflush(stdin);
				
			
		 }
		 push_oprtr(&s,token);
		}
		}
	while(s.top_operator>=0){
		op=pop_oprtr(&s);
		opr1=pop_operand(&s);
		if(s.top_operand>=0){
		opr2=pop_operand(&s);
		}
				
		switch(op){
					case'+':
						hasil=opr2+opr1;
						break;
					case'-':
						hasil=opr2-opr1;
						break;
					case'*':
						hasil=opr2*opr1;
						break;
					case'/':
						hasil=opr2/opr1;
						break;
					case'^':
						hasil=Perpangkatan(opr2,opr1);
						break;
					case's':
					  	hasil=sin(opr1*phi/180);
					  	break;
					case'!':
						hasil=factorial(opr1);
						break;
			 }
				push_operand(&s,hasil);
				fflush(stdin);
	}
		
		
	
	return pop_operand(&s);
}
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


//    root = pow(konst, 1.0/power);
//	return root;
//}
