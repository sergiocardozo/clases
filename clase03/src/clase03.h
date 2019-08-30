/*
 ============================================================================
 Name        : clase03.c
 Author      : Cardozo sergio
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================


#include <stdio.h>
#include <stdlib.h>

int getNumero(int* pNumero,int maximo,int minimo,int reintentos,char* pMensaje)
{
int retorno;
int num;

	while(reintentos > 0)
	{
		printf(pMensaje);
		scanf("%d",&num);
			if(num<maximo && num>minimo){

			reintentos--;
			}
	}
	if(reintentos == 0){
		retorno=-1;
	}
	else{
		retorno=0;
		*pResultado = num;
	}
	return retorno;

}*/


