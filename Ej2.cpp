/*
 Problema: En una tienda de electrónica, cada producto tiene un código único y quieres
gestionar el inventario. A medida que entran y salen productos, es necesario mantener el
sistema actualizado.
● Tarea: Inserta los productos con los siguientes códigos: 4001, 2002, 6003, 1500,
3500, 5000, 7000.
● Desafío: Un cliente compró los productos con códigos 2002 y 6003, así que
elimínalos del sistema. Luego, un nuevo producto con el código 2500 llega al
inventario. Imprime el inventario actualizado y verifica si el código 4001 todavía está
en el sistema.
 */

#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main() {
    ArbolBinario<int> Tienda;
    Tienda.put(4001);
    Tienda.put(2002);
    Tienda.put(6003);
    Tienda.put(1500);
    Tienda.put(3500);
    Tienda.put(5000);
    Tienda.put(7000);
    cout << "inventario actual" << endl;
    Tienda.print();

    Tienda.remove(2002);
    Tienda.remove(6003);

    std::cout << "Inventario después de eliminar los productos 2002 y 6003 (inorden): "<< endl;
    Tienda.print();

    Tienda.put(2500);
    try {
        int producto = Tienda.search(4001);
        std::cout << "El producto con ID 4001 está en la tienda: " << producto << std::endl;
    } catch (int e) {
        if (e == 200) {
            std::cout << "El producto con ID 4001 no está en la tienda." << std::endl;
        }
    }
    cout << "inventarui ahora" << endl;
    Tienda.print();
}
