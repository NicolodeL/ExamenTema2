#include "estudiante.h"
#include <cstdio>
#include "asistencia.h"
#include <vector>


int main(){


    Estudiante estudiante1 = {"Manu", 20, 4.5};
    mostrarEstudiante(estudiante1);


    estudiante1.registrarAsistencia("2023-01-01", "Matemáticas", "Asistió");
    estudiante1.registrarAsistencia("2023-01-02", "Física", "Falta");
    estudiante1.registrarAsistencia("2023-01-03", "Programación", "Tardanza");

    estudiante1.mostrarAsistencia();


    return 0;
}
