#include <iostream>
int main () {
    int n1, n2, n3;

    std::cout << "Ingrese el primer digito: " << std::endl;
    std::cin >> n1;
    std::cout << "El segundo: " << std::endl;
    std::cin >> n2;
    std::cout << "El tercero: " << std::endl;
    std::cin >> n3;

    int n4;

    std::cout << "Ahora ingrese el cuarto numero: ";
    std::cin >> n4;

    if ((n1 == n4) || (n2 == n4) || (n3 == n4)) {
        std::cout << "\nEl cuarto numero coincide con alguno ingresado anteriormente" << std::endl;
    }
    else {
        std::cout << "\nEl cuarto numero no coincide con ninguno" << std::endl;
    }

    return 0;
}
