#include <iostream>
#include <cmath>
int main() {
	
	double x, y;

	std::cout << "Ingrese el valor de X: ";
	std::cin >> x;
	
	std::cout << "Ingrese el valor de Y: ";
	std::cin >> y;

	double resultado;
	resultado = (sqrt(x)) / (pow(y, 2) - 1);

	std::cout << "El resultado de la función es: " << resultado << std::endl;
	return 0;
}
