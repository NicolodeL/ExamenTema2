#ifndef ASISTENCIA_H
#define ASISTENCIA_H

#include <iostream>
#include <string>
#include <vector>

// Declaración de la estructura Asistencia
struct Asistencia {
    std::string fecha;
    std::string materia;
    std::string estado;
};

// Declaración de la clase Estudiante
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
