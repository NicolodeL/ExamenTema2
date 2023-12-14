cmake_minimum_required(VERSION 3.26)
project(Ejerciciosprogramacionestructurada)

set(CMAKE_CXX_STANDARD 14)

add_executable(main "main.cpp"
        estudiante.h
        estudiante.cpp
        estudiantec.h
        estudiantec.c
        main.c
        asistencia.cpp
        asistencia.h
)

add_executable(mainc "main.c"
        estudiantec.h
        estudiantec.c
        main.c)
