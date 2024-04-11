#include <iostream>
#include <cmath>
int main() {
	
	int cateto1, cateto2, hipotenusa;

	std::cout << "Ingrese la medida del primer cateto: ";
	std::cin >> cateto1;
	
	std::cout << "\nIngrese la medida del segundo cateto: " << std::endl;
	std::cin >> cateto2;

	hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));
	
	std::cout << "\nLa hipotenusa resultado da: " << hipotenusa << std::endl;

	return 0;
