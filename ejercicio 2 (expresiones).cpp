#include <iostream>
int main() {
	
	double a, b, c, d, resultado = 0;
	
	std::cout << "Ingrese el número de la letra A: "; std::cin >> a;
	
	std::cout << "Ingrese el número de la letra B: "; std::cin >> b;

	std::cout << "Ingrese el número de la letra C: "; std::cin >> c;

	std::cout << "Ingrese el núimero de la letra D: "; std::cin >> d;

	 resultado = (a + b) / (c / d);

	  std::cout.precision(3);
	  std::cout << "El resultado de la operación es: " << resultado << std::endl;


	return 0;
}
