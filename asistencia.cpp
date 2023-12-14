#include "asistencia.h"

// Implementación del constructor de Estudiante
Estudiante::Estudiante(const std::string& nombre, int edad, float promedio)
        : nombre(nombre), edad(edad), promedio(promedio) {}

// Función para registrar la asistencia
void Estudiante::registrarAsistencia(const std::string& fecha, const std::string& materia, const std::string& estado) {
    Asistencia nuevaAsistencia = {fecha, materia, estado};
    asistencias.push_back(nuevaAsistencia);
}

// Función para mostrar la asistencia del estudiante
void Estudiante::mostrarAsistencia() {
    std::cout << "Asistencia para " << nombre << ":" << std::endl;

    for (const auto& asistencia : asistencias) {
        std::cout << "Fecha: " << asistencia.fecha << ", Materia: " << asistencia.materia
                  << ", Estado: " << asistencia.estado << std::endl;
    }
}
