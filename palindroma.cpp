#include <iostream>
#include <string>
#include <locale>



    
// Función recursiva para verificar si una palabra es palíndroma
bool esPalindromo(const std::string& palabra, int inicio, int fin) {
    if (inicio >= fin) {
        return true; // Caso base: la palabra es palíndroma
    }
    if (palabra[inicio] != palabra[fin]) {
        return false; // Si los caracteres no coinciden, no es palíndroma
    }
    return esPalindromo(palabra, inicio + 1, fin - 1); // Llamada recursiva
}

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string palabra;

    std::cout << "Introduce una palabra: ";
    std::cin >> palabra;

    // Determinar si la palabra es palíndroma
    if (esPalindromo(palabra, 0, palabra.size() - 1)) {
        std::cout << "La palabra \"" << palabra << "\" es palíndroma." << std::endl;
    } else {
        std::cout << "La palabra \"" << palabra << "\" no es palíndroma." << std::endl;
    }

    return 0;
}
