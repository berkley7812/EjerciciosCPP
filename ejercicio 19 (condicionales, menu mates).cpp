#include <iostream>
#include <cmath>
int main () {

    /*Hacer un menú que considere las siguientes opciones:
    Caso 1: Cubo de un número
    Caso 2: Numero par o Impar
    Caso 3: Salir.*/

    
    std::cout << "Ingrese un digito: " << std::endl;
    int numero;
    std::cin >> numero;

    std::cout << "Eliga ahora una opción para interactuar con el digito." << std::endl;
    int opcion;

    std::cout << "\n1. El cubo del numero.";
    std::cout << "\n2. Detectar si el numero es par o impar.";
    std::cout << "\n3. Salir del programa " << std::endl;
    std::cin >> opcion;
    
    switch (opcion) {
        case 1: double numeroAlCubo;
                numeroAlCubo = pow(numero, 3);
                std::cout << "El cubo del dígito ingresado es: " << numeroAlCubo << std::endl;
                break;

                case 2: if (numero%2==0) {
                    std::cout << "El numero es par." << std::endl;
                }
                    else {
                        std::cout << "El numero es impar." << std::endl;
                        }
                    break;

                    case 3: 
                    break;
                } 
}
    
