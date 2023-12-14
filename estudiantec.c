
#include "estudiante.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void agregarMateria(struct Estudiante* estudiante, const char* materia) {
    estudiante->materias = realloc(estudiante->materias, (estudiante->numMaterias + 1) * sizeof(char*));

    estudiante->materias[estudiante->numMaterias] = malloc(strlen(materia) + 1);
    strcpy(estudiante->materias[estudiante->numMaterias], materia);

    estudiante->numMaterias++;
}

void eliminarMateria(struct Estudiante* estudiante, const char* materia) {
    for (int i = 0; i < estudiante->numMaterias; i++) {
        if (strcmp(estudiante->materias[i], materia) == 0) {
            free(estudiante->materias[i]);

            for (int j = i; j < estudiante->numMaterias - 1; j++) {
                estudiante->materias[j] = estudiante->materias[j + 1];
            }

            estudiante->materias = realloc(estudiante->materias, (estudiante->numMaterias - 1) * sizeof(char*));
            estudiante->numMaterias--;

            break;
        }
    }
}

void mostrarMaterias(const struct Estudiante* estudiante) {
    printf("Materias para %s:\n", estudiante->nombre);

    for (int i = 0; i < estudiante->numMaterias; i++) {
        printf("%s\n", estudiante->materias[i]);
    }

    printf("\n");
}

void liberarMaterias(struct Estudiante* estudiante) {
    for (int i = 0; i < estudiante->numMaterias; i++) {
        free(estudiante->materias[i]);
    }

    free(estudiante->materias);
    estudiante->numMaterias = 0;
}
