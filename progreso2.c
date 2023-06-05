#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define NUM_ALUMNOS 23
#define NUM_PROGRESOS 3
//Esto sirve para obtener el promedio de calificaciones de cada alumno
void obtenerPromedioAlumnos(float calificaciones[NUM_ALUMNOS][NUM_PROGRESOS], float promedios[NUM_ALUMNOS]) {
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        float suma = 0.0;
        for (int j = 0; j < NUM_PROGRESOS; j++) {
            suma += calificaciones[i][j];
        }
        promedios[i] = suma / NUM_PROGRESOS;
    }
}
//Esto sirve para obtener el promedio del grupo
float obtenerPromedioGrupo(float calificaciones[NUM_ALUMNOS][NUM_PROGRESOS]) {
    float suma = 0.0;
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        for (int j = 0; j < NUM_PROGRESOS; j++) {
            suma += calificaciones[i][j];
        }
    }
    return suma / (NUM_ALUMNOS * NUM_PROGRESOS);

int main() {
    float calificaciones[NUM_ALUMNOS][NUM_PROGRESOS];
    float promedios[NUM_ALUMNOS];

    srand(time(NULL)); //Generador de números aleatorios

// Generar notas aleatorias para cada estudiante y cada progreso
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        for (int j = 0; j < NUM_PROGRESOS; j++) {
            calificaciones[i][j] = (float)(rand() % 10 + 1); // Generar un número aleatorio entre 1 y 10
        }
    }
    //Se realizo una tabla de calificacion para mostrar los numeros random
printf("Tabla de calificaciones:\n\n");
    printf("Estudiante\tProgreso 1\tProgreso 2\tProgreso 3\n");
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        printf("%d\t\t", i + 1);
        for (int j = 0; j < NUM_PROGRESOS; j++) {
            printf("%.2f\t\t", calificaciones[i][j]);
        }
        printf("\n");
    }

    printf("\nPromedio de calificaciones de cada alumno:\n");
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        printf("Alumno %d: %.2f\n", i + 1, promedios[i]);
    }

    printf("\nPromedio del grupo para cada progreso: %.2f\n", promedioGrupo);

    printf("\nAlumno con el mayor promedio de calificación:\n");
    printf("Alumno %d\n", mejorAlumno + 1);

    return 0;
}



   