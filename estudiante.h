
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    char** materias;
    int numMaterias;
};

void agregarMateria(struct Estudiante* estudiante, const char* materia);
void eliminarMateria(struct Estudiante* estudiante, const char* materia);
void mostrarMaterias(const struct Estudiante* estudiante);
void liberarMaterias(struct Estudiante* estudiante);

#endif // ESTUDIANTE_H
