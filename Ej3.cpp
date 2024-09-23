/*
 Problema: Estás diseñando un sistema de inscripción para un gimnasio, donde cada socio
tiene un número de socio único. El sistema debe permitir la inscripción de nuevos socios, la
eliminación de socios que se dan de baja, y la búsqueda de socios activos.
● Tarea: Inscribe a los socios con los siguientes números de socio: 500, 250, 750, 100,
300, 600, 800.
● Desafío: Un socio con el número 250 se da de baja, así que elimínalo. Luego,
verifica si los socios con los números 300 y 750 aún están activos. Imprime la lista
de socios actualizada
 */
#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main() {
    ArbolBinario<int> gym;
    gym.put(500);
    gym.put(250);
    gym.put(750);
    gym.put(100);
    gym.put(300);
    gym.put(600);
    gym.put(800);
    cout << "Miembros actuales del gimnasio" << endl;
    gym.print();

    cout << "Eliminando socio con numero de identificacion 250" << endl;
    gym.remove(250);

    cout << "Miembros actualizo" << endl;
    gym.print();

    try {
         bool socio = gym.search(300);
         if(socio)
        std::cout << "El socio: 300 sigue activo" << std::endl;

    } catch (int e) {

            std::cout << "El socio: 300 no esta activo" <<  std::endl;

    }
    try {
        bool socio = gym.search(750);
        if(socio)
            std::cout << "El socio: 750 sigue activo" << std::endl;

    } catch (int e) {

        std::cout << "El socio: 750 no esta activo" <<  std::endl;

    }

    cout << "Miembros del gym actuales" << endl;
    gym.print();

}
