#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int num1, num2;
    int mayor, menor;

    // Solicitar entrada de datos
    cout << "Ingrese el primer numero (num1): ";
    cin >> num1;
    cout << "Ingrese el segundo numero (num2): ";
    cin >> num2;

    // Proceso de comparación
    if (num1 > num2) {
        mayor = num1; // num1 es mayor
        menor = num2; // num2 es menor
    } else if (num2 > num1) {
        mayor = num2; // num2 es mayor
        menor = num1; // num1 es menor
    } else {
        // Si son iguales
        mayor = num1; // Ambos son iguales
        menor = num1; // Ambos son iguales
        cout << "Ambos numeros son iguales." << endl;
    }

    // Salida de datos
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;

    return 0;
}
