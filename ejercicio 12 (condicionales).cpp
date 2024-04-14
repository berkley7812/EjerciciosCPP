#include <iostream>
int main() {
	int n1, n2, n3;

	std::cout << "Ingrese tres números separados por un espacio: ";
	std::cin >> n1 >> n2 >> n3;

	if (n1 == n2 && n1 == n3){
		std::cout << "Los tres números son iguales";
	}
	else if (n1 > n2 && n1 > n3) {
		std::cout << "El primer número es mayor que los otros dos" << std::endl;
	}
	else if (n2 > n1 && n2 > n3) {
		std::cout << "El segundo número es mayor que los demás" << std::endl;
	}
	else {
		std::cout << "El tercer número es mayor" << std::endl;
	}
}
