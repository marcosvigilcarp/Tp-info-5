#include <stdio.h>

int main(int argc, char *argv[]) {
	//Tp N° 5 de Informatica//
	float N_Estudiantes, calificaciones_Estudiantiles, notas_faltantes, MAXcalificacion, MINcalificacion, Promedio_Estudiantil, Suma_Calificaciones;
	N_Estudiantes = 5;
	MAXcalificacion = 0;
	MINcalificacion = 100;
	Suma_Calificaciones = 0;
	do{
		printf("Buen dia, ingrese una cantidad especifica de estudiantes: ");
		scanf("%f", &N_Estudiantes);
		if (N_Estudiantes <= 0){
			printf("No existen alumnos negativos boludon, intente de nuevo.\n\n");
		}
		
	} while (N_Estudiantes <= 0); 
	for (int i = 1; i <= N_Estudiantes; i++) {
		do {
			printf("Escriba la nota del alumno %d: ", i);
			scanf("%f", &calificaciones_Estudiantiles);
			if (calificaciones_Estudiantiles < 0 || calificaciones_Estudiantiles > 100) {
				printf("No se pueden escribir notas negativas o mayores a 100, porfavor, introduzcala de nuevo\n\n");
			}
			
		} while (calificaciones_Estudiantiles < 0 || calificaciones_Estudiantiles > 100);
		Suma_Calificaciones = Suma_Calificaciones + calificaciones_Estudiantiles;
		if (calificaciones_Estudiantiles > MAXcalificacion){
			(MAXcalificacion = calificaciones_Estudiantiles);
		}
		if (calificaciones_Estudiantiles < MINcalificacion){
			(MINcalificacion = calificaciones_Estudiantiles);
		}
	}
	Promedio_Estudiantil = Suma_Calificaciones / N_Estudiantes;
	printf("DATOS FINALES:\n");
	printf("PROMEDIO ALUMNAJE: %.2f \n",Promedio_Estudiantil);
	printf("NOTA MAS ALTA: %.2f \n",MAXcalificacion);
	printf("NOTA MAS BAJA: %.2f \n",MINcalificacion);
	return 0;
}

