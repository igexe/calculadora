#include <stdlib.h>
#include <stdio.h>
#include "actions.h"

int main(){
	float res,num1,num2;
	int op=-1,temp=0;
	
	printf("digite um número\n");
	scanf(" %f",&res);
	
	while(op!=0){
		printf("escolha qual operação deseja realizar\n1 para adição\n2 para subtração\n3 para multiplicação\n4 para divisão\n0 para ver o resultado\n");
		scanf("%d",&op);
	
		switch(op){
			case 1:
				if(temp==0){
					printf("digite um número\n");
					scanf(" %f",&num1);
					temp=op;
					op=-1;
				}else{
					if(temp==1){
						res=soma(res,num1);
						scanf(" %g",&num1);
						op=0;
					}else{
						res=subtrai(res,num1);
						scanf(" %g",&num1);
						temp=op;
						op=-1;
					}
				}
				break;
			
			case 2:
				if(temp==0){
					printf("digite um número\n");
					scanf(" %f",&num1);
					temp=op;
					op=-1;
				}else{
					if(temp==2){
						res=subtrai(res,num1);
						scanf(" %g",&num1);
						op=0;
					}else{
						res=soma(res,num1);
						scanf(" %g",&num1);
						temp=op;
						op=-1;
					}
				}
				break;
			
			case 3:
				if(temp==0){
					printf("digite um número\n");
					scanf(" %f",&num1);
					res=multiplica(res,num1);
					num1=0;
					op=-1;
				}else{
					printf("digite um número\n");
					scanf(" %f",&num2);
					num1=multiplica(num2,num1);
					num2=0;
					op=-1;
				}
				break;
				
			case 4:
				if(temp==0){
					printf("digite um número\n");
					scanf(" %f",&num1);
					if(num1==0){
						printf("não é possivel fazer a divisão por zero número não in serido\n");
						op=-1;
						break;
					}
					res=divide(res,num1);
					num1=0;
					op=-1;
				}else{
					printf("digite um número\n");
					scanf(" %f",&num2);
					if(num2==0){
						printf("não é possivel fazer a divisão por zero número não in serido\n");
						op=-1;
						break;
					}
					num1=divide(num2,num1);
					num2=0;
					op=-1;
				}
				break;
			
			case 0:
				if(temp==1){
					res=soma(res,num1);
					num1=0;
					num2=0;
				}
				if(temp==2){
					res=subtrai(res,num1);
					num1=0;
					num2=0;
				}
			
				printf("o resultado da sua operação é: %f\n",res);
				break;
				
			default:
				op=5;
				printf("ação invalida por favor escolha uma das seguintes opções:\n");
		}
	}
		
	return 0;
}
