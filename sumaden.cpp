#include <iostream>

// Función recursiva para calcular la suma de los primeros n números naturales
int sumaNaturales(int n) {
    if (n == 0) {
        return 0; // Caso base: la suma de 0 es 0
    }
    return n + sumaNaturales(n - 1); // Llamada recursiva
}

int main() {
    int n;

    std::cout << "Introduce un número natural: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Por favor, introduce un número natural no negativo." << std::endl;
    } else {
        int suma = sumaNaturales(n);
        std::cout << "La suma de los primeros " << n << " números naturales es: " << suma << std::endl;
    }

    return 0;
}
