#ifndef ASISTENCIA_H
#define ASISTENCIA_H

#include "estudiante.h"
#include "asistencia.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>


struct Asistencia {
    std::string fecha;
    std::string materia;
    std::string estado;
};

class Estudiante {
public:
    Estudiante(const std::string& nombre, int edad, float promedio);

    // Funciones para la asistencia
    void registrarAsistencia(const std::string& fecha, const std::string& materia, const std::string& estado);
    void mostrarAsistencia();

private:
    std::string nombre;
    int edad;
    float promedio;
    std::vector<Asistencia> asistencias;
};

#endif // ASISTENCIA_H
