

#ifndef EJERCICIOSPROGRAMACIONESTRUCTURADA_ESTUDIANTE_H
#define EJERCICIOSPROGRAMACIONESTRUCTURADA_ESTUDIANTE_H


struct Estudiante {
    char nombre [50];
    int edad;
    float promedio;

    void registrarAsistencia(const char *string, const char *string1, const char *string2);

    void mostrarAsistencia();
};

void mostrarEstudiante (Estudiante estudiante);


#endif //EJERCICIOSPROGRAMACIONESTRUCTURADA_ESTUDIANTE_H
