#include <iostream>

// Declaraciones de las funciones
int potenciaAux(int base, int exponente);
int potencia(int base, int exponente);

// Función recursiva principal para calcular la potencia
int potencia(int base, int exponente) {
    if (exponente == 0) {
        return 1; // Caso base: cualquier número elevado a 0 es 1
    }
    return base * potenciaAux(base, exponente - 1);
}

// Función auxiliar para manejar la recursividad
int potenciaAux(int base, int exponente) {
    if (exponente == 0) {
        return 1; // Caso base: cualquier número elevado a 0 es 1
    }
    return base * potencia(base, exponente - 1);
}

int main() {
    int base, exponente;

    std::cout << "Introduce la base: ";
    std::cin >> base;
    std::cout << "Introduce el exponente: ";
    std::cin >> exponente;

    int resultado = potencia(base, exponente);
    std::cout << base << " elevado a la " << exponente << " es: " << resultado << std::endl;

    return 0;
}
