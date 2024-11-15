#include <iostream>
#include <cstdlib> 
#include <ctime>  


int main() {
    int n, m;

    // Solicitar el tamaño de la matriz al usuario
    std::cout << "Ingrese el número de filas (n): ";
    std::cin >> n;
    std::cout << "Ingrese el número de columnas (m): ";
    std::cin >> m;

    // Crear la matriz dinámica con punteros
    int** matriz = new int*[n];
    for (int i = 0; i < n; i++) {
        matriz[i] = new int[m];
    }

    // Inicializar la semilla para generar números aleatorios
    srand (time_t(0));

    // Llenar la matriz con datos
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (n > 3 || m > 3) {
                matriz[i][j] = rand() % 100;  // Generar número aleatorio entre 0 y 99
                std::cout << "Posición [" << i << "][" << j << "]: " << matriz[i][j] << " (dato generado automáticamente)" << std::endl;
            } else {
                std::cout << "Ingrese el dato para la posición [" << i << "][" << j << "]: ";
                std::cin >> matriz[i][j];
            }
        }
    }

    // Imprimir la matriz resultante
    std::cout << "\nMatriz resultante:" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Liberar la memoria asignada dinámicamente
    for (int i = 0; i < n; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}