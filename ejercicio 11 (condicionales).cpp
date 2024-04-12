#include<iostream>
int main() {

	int numero1, numero2;

	std::cout << "Ingrese el primer número: ";
	std::cin >> numero1;
	std::cout << "Ingrese el segundo número: ";
	std::cin >> numero2;
	
	
	if (numero1 >> numero2) {
		std::cout << "El primer número ingresado es mayor que el segundo" << std::endl;
	}
	else {
		std::cout << "El segundo número es mayor que el primero" << std::endl;
	}
}
