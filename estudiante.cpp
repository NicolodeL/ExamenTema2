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