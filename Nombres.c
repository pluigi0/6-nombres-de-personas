#include <stdio.h>
#include <string.h>

int main(){
	int i,j;
	char nombres[5][25];
	char items[5][25] = {"primer", "segundo" , "tercer", "cuarto", "quinto"}; 
	char nombre_corto[20];
	
	
	for(i = 0; i < 5; i++){
		printf("Ingrese el %s nombre: ",items[i]);
		gets(nombres[i]);
	}
	
	for(i = 0; i < 5; i++){
		for(j = i; j < 5 ; j++){
			if(strlen(nombres[i]) < strlen(nombres[j])){
				strcpy(nombre_corto,nombres[i]);
			}
		}
	}
	
	printf("El nombre mas corto es el de %s\n",nombre_corto);
	
	system("pause");
	return 0;
}
