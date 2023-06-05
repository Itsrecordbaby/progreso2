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

int Mejoralumno
float obtenerPromedioGrupo(float calificaciones[NUM_ALUMNOS][NUM_PROGRESOS]) {
    float suma = 0.0;
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        for (int j = 0; j < NUM_PROGRESOS; j++) {
            suma += calificaciones[i][j];
        }
    }
    return suma / (NUM_ALUMNOS * NUM_PROGRESOS);





}








   