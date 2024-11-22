#include <iostream>

// Función recursiva para convertir un número decimal a binario
void convertirABinario(int numero) {
    if (numero > 1) {
        convertirABinario(numero / 2); // Llamada recursiva con la división entera
    }
    std::cout << (numero % 2); // Imprime el bit actual
}

int main() {
    int numero;

    std::cout << "Introduce un número decimal: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "El número debe ser positivo." << std::endl;
    } else {
        std::cout << "El número en binario es: ";
        convertirABinario(numero);
        std::cout << std::endl;
    }

    return 0;
}
