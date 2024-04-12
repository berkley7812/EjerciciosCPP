#include<iostream>
int main() {

	int numero;
	std::cout << "Ingrese un número: ";
	std::cin >> numero;

	if (numero > 10) {
		std::cout << "El número es mayor que 10" << std::endl;
	}
	else {
		std::cout << "El número es menor que 10" << std::endl;
	}
	
	return 0;
}
