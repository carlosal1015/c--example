#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "¿Cómo te llamas?" << std::endl;
    // Este es un comentario
    /*
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

    return 0;
}
