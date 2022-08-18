/**************************************************
* Fecha: 10-agosto-2022
* Autor: Daniel Velásquez
* Materia: HPC I
* Tema: Taller 1 C++
* Tópico: Aplicación Cálculo suma de los multiplos
*   de 5 entre dos numeros
**************************************************/

#include <iostream>

/*Se establecen a y b como variables globales*/
int a, b;

/*Función para verificar que un numero ingresado sea mayor que 0 (positivo)*/
int verify(int number){
    int nb = number;
    while(nb<0){
        std::cout<<"    Cuidado, digite un numero positivo"<< std::endl;
        std::cin >> nb;
    }
    return nb;
}

/*Función para verificar que a es menor que b*/
void verify_data(){
    if(a>b){
        int aux;
        aux=b;
        b=a;
        a=aux;
    }
}

/*Función para hallar los multiplos entre dos numeros y la suma de estos*/
void multiplos(){
    int sumMultiplos = 0;
    std::cout<<"Multiplos de 5, entre " << a << " y " << b << ":" << std::endl;
    for (int i=a; i<=b; i++) {
        if (i % 5 == 0){
            std::cout<< i << " ";
            sumMultiplos = sumMultiplos+i;
        }
    }
    if(sumMultiplos>0){
        std::cout<< "" << std::endl;
        std::cout<< "Suma de los multiplos: " << sumMultiplos << std::endl;
    }else{
        std::cout<< "No hay multiplos" << std::endl;
    }
}

/*Main del programa*/
int main()
{
    std::cout<<"Digite el primer numero"<< std::endl;
    std::cin >> a;
    a = verify(a);
    std::cout<<"Digite el segundo numero"<< std::endl;
    std::cin >> b;
    b = verify(b);
    verify_data();
    std::cout<<"a: " << a << " b: " << b << std::endl;
    multiplos();

    return 0;
}
