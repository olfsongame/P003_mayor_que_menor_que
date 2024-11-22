#include <iostream>

// Función para calcular el MCD utilizando el algoritmo de Euclides recursivo
int calcularMCD(int a, int b) {
    if (b == 0) {
        return a; // Caso base: cuando b es 0, el MCD es a
    }
    return calcularMCD(b, a % b); // Llamada recursiva
}

int main() {
    int numero1, numero2;

    // Solicitar los números al usuario
    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;

    // Calcular y mostrar el MCD
    int mcd = calcularMCD(numero1, numero2);
    std::cout << "El maximo comun divisor de " << numero1 << " y " << numero2 << " es: " << mcd << std::endl;

    return 0;
}
