

#ifndef EJERCICIOSPROGRAMACIONESTRUCTURADA_ESTUDIANTEC_H
#define EJERCICIOSPROGRAMACIONESTRUCTURADA_ESTUDIANTEC_H
struct Estudiante {
    char nombre [50];
    int edad;
    float promedio;
};
void mostrarEstudiante(const struct Estudiante* estudiante);
#endif //EJERCICIOSPROGRAMACIONESTRUCTURADA_ESTUDIANTEC_H
