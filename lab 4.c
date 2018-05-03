#include<stdio.h>  
//Se va a definir una variable "N" que seran los numeros que se 
//ingresen, seran distinto de 0 y seran dividos por 10. Se va a definir
//la variable "resto" que sera para obtener el resto de los numeros
//que de la variable "N". Asi se usaran hasta que el numero de la 
//variable "N" sea 0 y con eso la variable "resto" nos dara el mismo 
//numero ingresado al principio, pero al revez.
int main(void)
{
    int N, resto;
    printf("Ingrese_numeros:\t");
    scanf("%d", &N);
    while (N!=0)
{
	resto=N%10;
	
	N=N/10;
	printf("%d", resto);

	


}
 	
	



    
    
        
     
     


return 0;
}
