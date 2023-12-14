#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "estudiante.h"

void mostrarEstudiante (const Estudiante estudiante) {
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
}

void Estudiante::registrarAsistencia(const char *string, const char *string1, const char *string2) {

}
