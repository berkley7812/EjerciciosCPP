#include <iostream>
int main() {
	
	float a, b, c, d, e, f;
	
	std::cout << "Ingrese dígito de A: "; std::cin >> a;
	std::cout << "B: "; std::cin >> b;
	std::cout << "C: "; std::cin >> c;
	std::cout << "D: "; std::cin >> d;
    std::cout << "E: "; std::cin >> e;
	std::cout << "F: "; std::cin >> f;
     
	float resultado;

	resultado = (a + (b / c)) / (d + (e / f));
	cout.precision(2)
	std::cout << "\nEl resultado de la operación es: " << resultado << std::endl;

	return 0;
}