#include <iostream>
int main() {
	
	double notapracticas, notateorica, notaparticipacion;

	std::cout << "Ingrese la nota de prácticas: ";
	 std::cin >> notapracticas;
	std::cout << "Ingrese la nota teórica: ";
	 std::cin >> notateorica;
	std::cout << "Ingrese la nota de participación: ";
	 std::cin >> notaparticipacion;
     
	 notapracticas *= 0.30;
	 notateorica *= 0.60;
	 notaparticipacion *= 0.10;

	 double notafinal;
	        notafinal = notapracticas + notateorica + notaparticipacion;
	        

	std::cout << "El resultado de las notas finales es: " << notafinal << std::endl;


	return 0;
}
