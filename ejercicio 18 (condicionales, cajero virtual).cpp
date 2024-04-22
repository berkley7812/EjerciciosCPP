#include <iostream>
int main () {
    //Hacer un programa que simule un cajero bancario con un saldo inicial de 1000 dólares.
    
    int saldoInicial;
    saldoInicial = 1000;
    int opcion;

    std::cout << "Bienvenido a su Cajero Virtual";
    std::cout << "\nEstas son las opciones que tenemos disponibles:" << std::endl;
    std::cout << "\n1. Consulta de saldo";
    std::cout << "\n2. Deposito";
    std::cout << "\n3. Retiro";
    std::cout << "\nPor favor, digite el numero de la accion correspondiente: " << std::endl;
    std::cin >> opcion;

    switch(opcion) {
        case 1: std::cout << "Su saldo actual es de: " << saldoInicial << std::endl; //Consulta de saldo
        break;
           
         case 2: std::cout << "¿Cuánto dinero depositará?" << std::endl; //Deposito de dinero
                int saldoDepositar;
                std::cin >> saldoDepositar;
                int saldoFinalDeposito;
                saldoFinalDeposito = saldoDepositar + saldoDepositar;
                std::cout << "Su deposito de " << saldoDepositar << " dolares, ha finalizado correctamente, su saldo final es de: " << saldoFinalDeposito << " muchas gracias por confiar en su Cajero Virtual." << std::endl;
                break;
          case 3: std::cout << "¿Cuanto dinero retirará de su cuenta?" << std::endl; //Retiro de dinero
                  int saldoRetirar;
                  std::cin >> saldoRetirar;
                  int saldoFinalRetiro;
                  saldoFinalRetiro = saldoInicial - saldoRetirar;
                  if (saldoInicial >= saldoRetirar) {
                    std::cout << "Su retiro de " << saldoRetirar << " dolares, se ha ejecutado correctamente, su saldo actual es de " << saldoFinalRetiro << " dolares, muchas gracias por confiar en su Cajero Virtual." << std::endl;
                  }
                  else {
                    std::cout << "Lo sentimos, el dinero que intenta retirar excede la cantidad que posee en su cuenta, movimiento cancelado.";
                  }
                  break;                         
    }
}
