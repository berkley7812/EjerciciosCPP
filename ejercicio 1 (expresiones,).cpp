#include <iostream>
int main() {
	float a, b; //Puede ser de manera integral también.

	std::cout << "Ingrese el número para A: ";
	 std::cin >> a;

	std::cout << "Ingrese el número para B: ";
	 std::cin >> b;

	float suma = 0;
	 suma = (a / b) + 1;
         std::cout.precision(2) // En caso de tener demasiados decimales.
	 std::cout << "\nEl resultado de la operación es: " << suma << std::endl;

	return 0;
}
