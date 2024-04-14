#include <iostream>
int main() {
	int edad;
	std::cout << "Ingrese una edad: ";
	std::cin >> edad;

	if (edad >= 18 && edad <= 25) {
		std::cout << "La edad esta en un rango de 18 a 25 años" << std::endl;
	}
	else {
		std::cout << "La edad no esta en un rango adecuado" << std::endl;
	}
}
