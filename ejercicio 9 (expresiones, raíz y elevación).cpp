#include <cmath>
int main() {
	
	/*
	segundo grado = ax^2 + bx + c = 0
	bashkara = x = (-b (+-)) sqrt((b, 2) - ( 4 * a * c)) / (2 * a)
	*/

	float a, b, c;

	std::cout << "Ingrese la variable a: ";
	std::cin >> a;

	std::cout << "Ingrese la variable b: ";
	std::cin >> b;

	std::cout << "Ingrese la variable c: ";
	std::cin >> c;

	float bashkarapositivo = 0, bashkaranegativo = 0;
	bashkarapositivo = (- b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
	bashkaranegativo = (- b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);

	std::cout << "Los dos resultados de la ecuación cuadrática es: " << std::endl;

	std::cout << "\nX1: " << bashkarapositivo << std::endl;
	std::cout << "\nX2: " << bashkaranegativo << std::endl;
	

	return 0;
}
