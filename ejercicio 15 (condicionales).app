#include <iostream>
int main()
{
	char letra;

	std::cout << "Ingrese la vocal: ";
	std::cin >> letra;

	switch (letra) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		std::cout << "\nLa vocal es minuscula" << std::endl; break;
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		std::cout << "\nLa vocal es mayuscula" << std::endl; break;
	default: std::cout << "\nEl caracter no es una vocal" << std::endl;
	}

	return 0;
}
