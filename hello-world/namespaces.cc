#include <iostream>
#include <string>
#include <vector>

namespace spanish {
    void saludo() {
        std::cout << "Hola\n";
    }
}

namespace english {
    void saludo() {
        std::cout << "Hello\n";
    }
}

int main() {
    std::cout << "¿Cómo te llamas?" << std::endl;
    // Este es un comentario
    /*
     * Para compilar crea una carpeta build con mkdir build
     * luego entra esa carpeta con cd build
     * escribe cmake ..
     * make
     * ./tutorial
     * Hola
     * Hola
     * Hola
     * */
    std::string name;
    std::cin >> name;

    if (name == "Carlos" or name == "Miguel" or name == "Adelaida")
    {
        std::cout << "Somos del grupo de Deal.II.\n";
    }
    else{
        std::cout << "No somos del grupo de Deal.II\n";
    }

    std::vector<int> u {1, 2, 3, 4};
    for (int i = 0; i < 3; i++)
    {
        std::cout << u[i] << "\n";
    }

    spanish::saludo();
    english::saludo();

    return 0;
}
