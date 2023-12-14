#include "estudiantec.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main () {

    struct Estudiante2 estudiante1;
    snprintf(estudiante1.nombre, sizeof(estudiante1.nombre), "Juanjo");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;
    mostrarEstudiante2(&estudiante1);
    return 0;
}