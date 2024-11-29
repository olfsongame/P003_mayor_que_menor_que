#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

// Enumerador para power-ups
enum PowerUp { FUERZA_EXTRA = 5, VELOCIDAD_EXTRA = 10, RESISTENCIA_EXTRA = 15 };

// Estructura para representar a un jugador
struct Jugador {
    std::string nombre;
    int fuerza;
    int velocidad;
    int resistencia;
    int inteligencia;

    // Método para aplicar un power-up aleatorio
    void aplicarPowerUp() {
        int powerUp = rand() % 3;
        switch (powerUp) {
            case 0: fuerza += FUERZA_EXTRA; break;
            case 1: velocidad += VELOCIDAD_EXTRA; break;
            case 2: resistencia += RESISTENCIA_EXTRA; break;
        }
    }

    // Método para mostrar las estadísticas del jugador
    void mostrar() const {
        std::cout << nombre << " | Fuerza: " << fuerza 
                  << ", Velocidad: " << velocidad 
                  << ", Resistencia: " << resistencia 
                  << ", Inteligencia: " << inteligencia << std::endl;
    }

    // Función para determinar el poder total del jugador
    int poderTotal() const {
        return fuerza + velocidad + resistencia + inteligencia;
    }
};

// Procedimiento para enfrentar dos jugadores y devolver al ganador
Jugador enfrentar(Jugador& jugador1, Jugador& jugador2) {
    if (jugador1.poderTotal() >= jugador2.poderTotal()) {
        std::cout << jugador1.nombre << " vence a " << jugador2.nombre << std::endl;
        return jugador1;
    } else {
        std::cout << jugador2.nombre << " vence a " << jugador1.nombre << std::endl;
        return jugador2;
    }
}

int main() {
    srand(time(0)); // Inicialización de la semilla para el random

    // Lista de jugadores
    std::vector<std::string> nombres = {
        "ivangod", "jorgeelchill", "gonzalolux", "skibidisebas", "stiviwonder",
        "peñita", "aronolo", "cristianpaz", "ericgotan", "charles", 
        "sumin", "brunoyt", "mejimillones", "yisusplait", "nicokado", 
        "el popi", "bernie", "raysito", "marcum", "ecochad"
    };

    std::vector<Jugador> jugadores;

    // Crear jugadores y asignar propiedades aleatorias
    for (const std::string& nombre : nombres) {
        Jugador jugador;
        jugador.nombre = nombre;
        jugador.fuerza = rand() % 51;
        jugador.velocidad = rand() % 51;
        jugador.resistencia = rand() % 51;
        jugador.inteligencia = rand() % 51;
        jugador.aplicarPowerUp(); // Aplicar un power-up aleatorio
        jugadores.push_back(jugador);
    }

    // Mostrar los jugadores y sus estadísticas
    std::cout << "Jugadores iniciales:" << std::endl;
    for (const auto& jugador : jugadores) {
        jugador.mostrar();
    }

    // Battle Royale: eliminación uno contra uno hasta que quede un solo jugador
    while (jugadores.size() > 1) {
        std::vector<Jugador> siguienteRonda;

        for (size_t i = 0; i < jugadores.size(); i += 2) {
            if (i + 1 < jugadores.size()) {
                Jugador ganador = enfrentar(jugadores[i], jugadores[i + 1]);
                siguienteRonda.push_back(ganador);
            } else {
                // Jugador sin oponente avanza a la siguiente ronda
                siguienteRonda.push_back(jugadores[i]);
            }
        }

        jugadores = siguienteRonda; // Actualizar la lista de jugadores
        std::cout << "\n--- Nueva Ronda ---\n" << std::endl;
    }

    // Mostrar el ganador final
    std::cout << "\n*** El ganador del Battle Royale es: " << jugadores[0].nombre << " ***" << std::endl;
    jugadores[0].mostrar();

    return 0;
}
