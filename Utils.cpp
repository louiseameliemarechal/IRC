#include "Utils.hpp"

void   errorMessage( std::string message ) {
    std::cerr << message << std::endl;
}

void sigintHandler(int sig) {
        // Affiche un message et termine proprement le processus
        std::cout << "SIGINT reçu, arrêt du programme" << std::endl;
        exit(0);
}