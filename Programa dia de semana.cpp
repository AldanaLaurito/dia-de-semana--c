//Hacer un programa que ingrese un numero de dia y mostrar el dia de la semana.
//Ejemplo 1-->Hoy es Lunes, si no es del 1 al 7 poner error de ingreso

#include<stdio.h>

int main ()
{
	int diaSemana=0;
	
	printf("Ingrese dia de la semana: ");
	scanf("%d", &diaSemana);
	
	switch (diaSemana)
	{
		case 1:
			printf("Es Lunes");
			break;
		case 2:
			printf("Es Martes");
			break;
		case 3:
			printf("Es Miercoles");
			break;
		case 4:
			printf("Es Jueves");
			break;
		case 5:
			printf("Es Viernes");
			break;
		case 6:
			printf("Es Sabado");
			break;
		case 7:
			printf("Es Domingo");
			break;
		default:
			printf("Error de Ingreso");
			break;
	}
}
