#include<stdio.h>

void MostrarDiaSemana (int dia);

int main ()
{
	int diaSemana=0;
	
	printf("Ingrese dia de la semana: ");
	scanf("%d", &diaSemana);
	
	MostrarDiaSemana(diaSemana);
	
	return 0;
}

void MostrarDiaSemana (int dia)
{
	switch (dia)
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
