#include <iostream>

// Definición de la estructura Nodo
struct Nodo {
    std::string parte; // Parte del cuerpo
    Nodo* siguiente;   // Puntero al siguiente nodo
};

int main() {
    // Creación de los nodos
    Nodo cabeza = {"Cabeza", nullptr};
    Nodo cuello = {"Cuello", nullptr};
    Nodo torso = {"Torso", nullptr};

    // Enlazar los nodos
    cabeza.siguiente = &cuello;
    cuello.siguiente = &torso;

    // Recorrer e imprimir los nodos
    Nodo* actual = &cabeza;
    while (actual != nullptr) {
        std::cout << actual->parte << std::endl;
        actual = actual->siguiente; // Avanza al siguiente nodo
    }

    return 0;
}
