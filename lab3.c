#include<stdio.h>
//Se inicia el ciclo, luego de obtener los datos, se usan los datos 
//obtenidos para que se sumen y se multipliquen y luego diga el resultado
void sueldo_por_dia (int horas_trabajadas,int dias_trabajados)
{
	int sueldo;
	sueldo= horas_trabajadas*dias_trabajados;
	printf ("sueldo: %d", sueldo);
}


int main (void)
{
	int i,horas_al_dia, contador_de_horas=0;
	for (i=0; i<6;i++){
		int hora;
		printf ("ingrese horas trabajadas por dia:");
	    scanf ("%d", &hora);
	    contador_de_horas= contador_de_horas+hora;
    }
    printf ("ingrese el sueldo por hora:");
    scanf ("%d", &horas_al_dia);
    sueldo_por_dia (contador_de_horas,horas_al_dia);
    return 0;
}	
	

	
	
	
