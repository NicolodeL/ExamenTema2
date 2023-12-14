#include "estudiante.h"
#include <cstdio>
#include "estudiantec.h"


int main(){


    Estudiante estudiante1 = {"Manu", 20, 4.5};
    mostrarEstudiante(estudiante1);

    struct Estudiante2 estudiante0;
    snprintf(estudiante1.nombre, sizeof(estudiante1.nombre), "Juanjo");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

    return 0;
}
