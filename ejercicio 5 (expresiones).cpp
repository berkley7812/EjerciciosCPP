#include <iostream>
int main() {
	
	float alumno1, alumno2, alumno3, alumno4;

	std::cout << "Ingrese nota del primer alumno: "; 
	 std::cin >> alumno1;
	std::cout << "Ingrese nota del segundo alumno: ";
	 std::cin >> alumno2;
	std::cout << "Ingrese nota del tercer alumno: ";
	 std::cin >> alumno3;
	std::cout << "Ingrese nota del cuarto alumno: ";
	 std::cin >> alumno4;

	 float promedio;
	       promedio = (alumno1 + alumno2 + alumno3 + alumno4) / 4;
     
		   std::cout << "El promedio de las notas de los alumnos es: " << promedio << std::endl;



	return 0;
}
