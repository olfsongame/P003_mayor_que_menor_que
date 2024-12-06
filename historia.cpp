#include <iostream>


int main() {
    int decision1, decision2, decision3;

   std::cout << "Bienvenido a la historia de George Floyd, un chico con el sueño de ser basquetbolista profesional.\n";
    std::cout << "Desde pequeño, George soñaba con jugar en la liga profesional. ¿Lo ayudarás a cumplir su sueño?\n";

    // Primera decisión
    std::cout << "\nUn día, George recibe una invitación para unirse al equipo de su escuela.\n";
    std::cout << "1. Acepta y entrena duro.\n";
    std::cout << "2. Rechaza la invitación y se dedica a sus estudios.\n";
    std::cout << "3. Decide entrenar por su cuenta sin unirse a ningún equipo.\n";
    std::cout << "Elige (1, 2 o 3): ";
    std::cin >> decision1;

    if (decision1 == 1) {
        std::cout << "\nGeorge entrena con dedicación, pero sus calificaciones empiezan a bajar.\n";
        std::cout << "Su maestro le da dos opciones:\n";
        std::cout << "1. Balancear el tiempo entre estudios y entrenamiento.\n";
        std::cout << "2. Dejar el basquetbol para concentrarse en sus estudios.\n";
        std::cout << "Elige (1 o 2): ";
        std::cin >> decision2;

        if (decision2 == 1) {
            std::cout << "\nFINAL 1: Georege aprende a equilibrar su tiempo y mejora tanto en la escuela como en el basquetbol.\n";
            std::cout << "Años después, consigue una beca universitaria y se convierte en jugador profesional.\n";
        } else if (decision2 == 2) {
            std::cout << "\nFINAL 2: George deja el basquetbol y se concentra en sus estudios.\n";
            std::cout << "Con el tiempo, se convierte en un exitoso ingeniero, aunque siempre recuerda su amor por el deporte.\n";
        } else {
            std::cout << "\nOpción no válida. George se asfixio por culpa de un policia.\n";
        }

    } else if (decision1 == 2) {
        std::cout << "\nGeorge decide enfocarse en sus estudios, pero nunca deja de jugar basquetbol en su tiempo libre.\n";
        std::cout << "Un día, un cazatalentos lo ve jugando en el parque y le ofrece una oportunidad:\n";
        std::cout << "1. Aceptar la oferta y seguir su sueño.\n";
        std::cout << "2. Rechazar la oferta y continuar con su vida académica.\n";
        std::cout << "Elige (1 o 2): ";
        std::cin >> decision2;

        if (decision2 == 1) {
            std::cout << "\nFINAL 3: George acepta la oferta y, aunque enfrenta muchos desafíos, logra cumplir su sueño de ser jugador profesional.\n";
        } else if (decision2 == 2) {
            std::cout << "\nFINAL 2: George rechaza la oferta y se concentra en sus estudios, alcanzando el éxito en otra área.\n";
        } else {
            std::cout << "\nOpción no válida. George se asfixio por culpa de un policia.\n";
        }

    } else if (decision1 == 3) {
        std::cout << "\nGeorge decide entrenar por su cuenta, sin ayuda de un equipo ni entrenador.\n";
        std::cout << "Con el tiempo, nota que no mejora tanto como esperaba y enfrenta otra decisión:\n";
        std::cout << "1. Pedir ayuda a un entrenador profesional.\n";
        std::cout << "2. Seguir entrenando solo hasta que logre algo.\n";
        std::cout << "Elige (1 o 2): ";
        std::cin >> decision3;

        if (decision3 == 1) {
            std::cout << "\nFINAL 1: George pide ayuda, mejora sus habilidades rápidamente y termina destacándose. \n";
            std::cout << "Finalmente, logra cumplir su sueño de ser jugador profesional.\n";
        } else if (decision3 == 2) {
            std::cout << "\nFINAL 4: George sigue entrenando solo, pero sin guía ni apoyo adecuado, nunca alcanza su verdadero potencial.\n";
            std::cout << "A pesar de no lograr ser profesional, se convierte en un ejemplo de perseverancia en su comunidad.\n";
        } else {
            std::cout << "\nOpción no válida. George se asfixio por culpa de un policia.\n";
        }

    } else {
        std::cout << "\nOpción no válida. George se asfixio por culpa de un policia.\n";
    }

    std::cout << "\nGracias por jugar. ¡Hasta la próxima! officer i cant breathe\n";
    return 0;
}
