/*
PROGRAMA: doble struct 
FECHA: 31/10/2018
ELABORADO POR: Sergio Daniel Arias Rendon
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>

struct producto{
	
	char nom[50];
	int v;	
};


struct tienda{
	
	struct producto prod[4];
	
}tien[4];




void crear(struct tienda tien[4]){
	
	int res, j=0,i;
	int venta1=0, venta2=0, venta3=0, venta4=0;
	
	do{ 
		printf("MENU.\nA que tienda desea ingresa\n\n1. Tienda (1)\n2. Tienda (2)\n3. Tienda (3)\n4. Tienda 4()\npresione 0 para salir del programa o mostrar la suma de cada producto\n\n");
		scanf("%i", &res);
		
		switch(res){
		case 1:{
			printf("TIENDA NUMERO (%i)\n\n",j+1);
			if(venta1 < 4){
				for(i=0; i<4; i++){
					fflush(stdin);
					printf("Nombre del producto %i que va a comprar: ",i+1);
					gets(tien[i].prod[i].nom);
					printf("Valor del producto %s: ",tien[i].prod[i].nom);
					scanf("%i", &tien[i].prod[i].v);
					printf("\n\n");
					venta1++;
				}
			}else{
				printf("No se puede adquirir mas productos de esta tienda\n\n");
			}
			
			break;
		}
		case 2:{
				printf("TIENDA NUMERO (%i)\n\n",j+2);
				if(venta2 <4){
					for(i=0; i<4; i++){
						printf("Nombre del producto %i que va a comprar: ",i+1);
						fflush(stdin);
						gets(tien[i+1].prod[i].nom);
						
						fflush(stdin);
						printf("Valor del producto %s\n",tien[i+1].prod[i].nom);
						scanf("%i", &tien[i+1].prod[i].v);
						printf("\n\n");
						
						venta2++;
					}
				}else{
					printf("No se puede adquirir mas productos de esta tienda\n\n");
				}
				break;
			}
		case 3:{
					printf("TIENDA NUMERO (%i)\n\n",j+3);
					if(venta3 < 4){
						for(i=0; i<4; i++){
							fflush(stdin);
							printf("Nombre del producto %i que va a comprar: ",i+1);
							gets(tien[i+2].prod[i].nom);
							printf("Valor del producto %s\n",tien[i+2].prod[i].nom);
							scanf("%i", &tien[i+2].prod[i].v);
							printf("\n\n");
							
							venta3++;
						}
					}else{
						printf("No se puede adquirir mas productos de esta tienda\n\n");
					}
					break;
				}
		case 4:{
						printf("TIENDA NUMERO (%i) \n\n",j+4);
						if(venta4 < 4){
							for(i=0; i<4; i++){
								fflush(stdin);
								printf("Nombre del producto %i que va a comprar: ",i+1);
								gets(tien[i+3].prod[i].nom);
								printf("Valor del producto %s\n",tien[i+3].prod[i].nom);
								scanf("%i", &tien[i+3].prod[i].v);
								printf("\n\n");
								
								venta4++;
							}
						}else{
							printf("No se puede adquirir mas productos de esta tienda\n\n");
						}
					};
		}
	} while(res != 0);
	
	
}


void sumar(struct tienda tien[4]){
	
	int i, suma[4];
	
	for(i=0; i<4; i++){
		
		suma[i] = (tien[i].prod[i].v + tien[i+1].prod[i].v + tien[i+2].prod[i].v + tien[i+3].prod[i].v);
		printf("la suma de los productos numero %i es:  %i\n",i+1, suma[i]);
	}
}

//LLAMADO A LAS FUNCIONES 
int main() {
	crear(tien);
	sumar(tien);
	
	return 0;
}

