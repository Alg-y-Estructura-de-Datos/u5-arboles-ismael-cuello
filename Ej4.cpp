/*
 Problema: Un restaurante tiene un sistema de reservas donde cada mesa tiene un número
específico. A medida que los clientes reservan o cancelan mesas, el sistema debe
mantenerse actualizado.
● Tarea: Agrega las reservas de las siguientes mesas: 15, 10, 20, 5, 12, 18, 25.
● Desafío: Dos clientes cancelaron sus reservas en las mesas 10 y 20, así que
elimínalas del sistema. Luego, un nuevo cliente reserva la mesa 13. Verifica si la
mesa 12 aún está reservada e imprime la lista actualizada de mesas reservadas.
 */
#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main(){
    ArbolBinario<int> restaurante;
    restaurante.put(15);
    restaurante.put(10);
    restaurante.put(20);
    restaurante.put(5);
    restaurante.put(12);
    restaurante.put(18);
    restaurante.put(25);

    cout << "Reservas del restaurante" << endl;
    restaurante.print();

    restaurante.remove(10);
    restaurante.remove(20);
    restaurante.put(13);
    try{
        bool reserva = restaurante.search(12);
        if(reserva)
            cout << "Esta reservado la mesa 12" << endl;
    }catch (int e){
        cout << "no esta reservado la mesa 12" << endl;
    }

    cout << "Reservas actualizadas " << endl;
    restaurante.print();
}