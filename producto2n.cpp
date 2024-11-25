#include <iostream>

// Función recursiva para calcular el producto de dos números
int producto(int a, int b) {
    if (b == 0) {
        return 0; // Caso base: cualquier número multiplicado por 0 es 0
    }
    if (b > 0) {
        return a + producto(a, b - 1); // Suma repetitiva para b positivo
    }
    return -producto(a, -b); // Si b es negativo, usa la simetría con números positivos
}

int main() {
    int num1, num2;

    std::cout << "Introduce el primer número: ";
    std::cin >> num1;
    std::cout << "Introduce el segundo número: ";
    std::cin >> num2;

    int resultado = producto(num1, num2);
    std::cout << "El producto de " << num1 << " y " << num2 << " es: " << resultado << std::endl;

    return 0;
}
