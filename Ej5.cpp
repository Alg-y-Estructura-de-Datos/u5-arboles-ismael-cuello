/*
 Problema: Trabajas en una empresa de logística y debes gestionar los paquetes que llegan
y se entregan a través de un sistema. Cada paquete tiene un número de seguimiento único.
Tu sistema debe permitir la entrada de nuevos paquetes, la entrega (eliminación) de
paquetes, y la verificación de los que siguen en tránsito.
● Tarea: Inserta los paquetes con los números de seguimiento: 1001, 5002, 3003,
2004, 4500, 7005, 8006.
● Desafío: Los paquetes con los números de seguimiento 2004 y 4500 fueron
entregados, así que elimínalos. Luego, un nuevo paquete con el número 3500 llega
al sistema. Verifica si el paquete con el número 1001 sigue en tránsito e imprime la
lista de paquetes restantes.
  */

#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace  std;

int main(){
    ArbolBinario<int>paqueteria;
    paqueteria.put(1001);
    paqueteria.put(5002);
    paqueteria.put(3003);
    paqueteria.put(2004);
    paqueteria.put(4500);
    paqueteria.put(7005);
    paqueteria.put(8006);

    paqueteria.print();
    paqueteria.remove(2004);
    paqueteria.remove(4500);
    paqueteria.put(3500);

    try{
        bool paquete = paqueteria.search(1001);
           if(paquete)
                    cout << "el paquete todavia continua en el deposito" << endl;
    }catch(int e){
        cout << "El paquete ya no esta en el deposito " << endl;
    }

    paqueteria.print();
}

