
#include "estudiantec.h"
#include <stdio.h>
#include <string.h>

void mostrarEstudiante2 (const struct Estudiante2* estudiante) {
    printf("Nombre: %s\n", estudiante->nombre);
    printf("Edad: %d\n", estudiante->edad);
    printf("Promedio: %f\n", estudiante->promedio);
}