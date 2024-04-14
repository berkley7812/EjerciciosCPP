#include <iostream>
int main() {
	int numero;

	std::cout << "Ingrese un digito: ";
	std::cin >> numero;

	if (numero > 0) {
		std::cout << "El dígito es positivo" << std::endl;
	}
	else {
		std::cout << "El digito es negativo" << std::endl;
	}
}
