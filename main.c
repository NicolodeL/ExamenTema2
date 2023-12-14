#include "estudiantec.h"
#include "estudiante.h"

int main() {
    // Crear un objeto Estudiante
    struct Estudiante estudiante1 = {"Juan Perez", 20, 8.5, 0};

    // Agregar materias
    agregarMateria(&estudiante1, "Matemáticas");
    agregarMateria(&estudiante1, "Física");
    agregarMateria(&estudiante1, "Programación");

    // Mostrar materias
    mostrarMaterias(&estudiante1);

    // Eliminar una materia
    eliminarMateria(&estudiante1, "Física");

    // Mostrar materias después de eliminar
    mostrarMaterias(&estudiante1);

    // Liberar memoria
    liberarMaterias(&estudiante1);

    return 0;
}
