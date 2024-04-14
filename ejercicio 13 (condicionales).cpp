#include <iostream>
int main() {
	int numero;

	std::cout << "Ingrese un digito: ";
	std::cin >> numero;

	if (numero % 2 == 0) {
		std::cout << "El numero es par" << std::endl;
	}
	else {
		std::cout << "El numero es impar" << std::endl;
	}
}
