/**************************************************
* Fecha: 10-agosto-2022
* Autor: Daniel Velásquez
* Materia: HPC I
* Tema: Taller 1 C++
* Tópico: Aplicación Calculo de importe a vehiculos
**************************************************/

#include <iostream>
#include <cstdlib>

//Funcion para calcular el importe de las motos y vehiculos
int calculoMotoCoche(int km){
    int importe = km*30;
    return importe;
}
//Funcion para calcular el importe de los camiones
int calculoCamion(int km, int tm){
    int importe = (km*30)+(tm*25);
    return importe;
}
//Funcion del menu de la aplicacion
void menu(){
    int op;
    bool salir = true;
    do {
        system("clear");

        //Menu
        std::cout << "Calculo de importe de vehiculos" << std::endl;
        std::cout << "1. Bicicleta" << std::endl;
        std::cout << "2. Moto" << std::endl;
        std::cout << "3. Coche" << std::endl;
        std::cout << "4. Camion" << std::endl;
        std::cout << "5. Salir" << std::endl;

        std::cout << "\nSeleccione la opcion deseada: ";
        std::cin >> op;
        int importe;
        int km,tm;
        switch (op) {
            case 1:
                importe=100;
                std::cout << "\nImporte fijo = " << importe << std::endl;
                //system("read -p 'Continuar...' var"); // Pausa
                salir = false;
                break;

            case 2:
                std::cout << "\nKilometros: ";
                std::cin >> km;
                std::cout << "\nImporte = " << calculoMotoCoche(km) << std::endl;
                //system("read -p 'Continuar...' var"); // Pausa
                salir = false;
                break;

            case 3:
                std::cout << "\nKilometros: ";
                std::cin >> km;
                std::cout << "\nImporte = " << calculoMotoCoche(km) << std::endl;
                //system("read -p 'Continuar...' var"); // Pausa
                salir = false;
                break;

            case 4:
                std::cout << "\nKilometros: ";
                std::cin >> km;
                std::cout << "Toneladas: ";
                std::cin >> tm;
                std::cout << "\nImporte = " << calculoCamion(km,tm) << std::endl;
                //system("read -p 'Continuar...' var"); // Pausa
                salir = false;
                break;

            case 5:
                salir = false;
                break;
            default:
                std::cout << "\nIngrese una opcion valida " << std::endl;
                system("read -p 'Continuar...' var"); // Pausa

        }
    } while (salir);
}

int main()
{
    menu();
    return 0;
}
