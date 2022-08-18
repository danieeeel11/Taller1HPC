/**************************************************
* Fecha: 10-agosto-2022
* Autor: Daniel Velásquez
* Materia: HPC I
* Tema: Taller 1 C++
* Tópico: Aplicación Cálculo numero del tarot
**************************************************/

#include <iostream>

/*Se establecen day, month y year como variables globales*/
int day, month, year;

/*Función para verificar la validez de un dia*/
int verify_day(int number){
    int nb = number;
    while(nb<=0 || nb>31){
        std::cout<<"    Cuidado, digite un dia valido"<< std::endl;
        std::cin >> nb;
    }
    return nb;
}

/*Función para verificar la validez de un mes*/
int verify_month(int number){
    int nb = number;
    while(nb<=0 || nb>12){
        std::cout<<"    Cuidado, digite un mes valido"<< std::endl;
        std::cin >> nb;
    }
    return nb;
}

/*Función para verificar la validez de un año*/
int verify_year(int number){
    int nb = number;
    while(nb<=0 || nb>9000){
        std::cout<<"    Cuidado, digite un año valido"<< std::endl;
        std::cin >> nb;
    }
    return nb;
}

/*Función para reducir un numero a un unico digito*/
int until_uniqueDig(int sum){
    int dig[10];
    int i = 0;
    while(sum>0){
        dig[i] = sum%10;
        sum = sum/10;
        i++;
    }
    sum=0;
    for(int j=0; j<=i-1; j++){
        sum = sum+dig[j];
    }
    return sum;
}

/*Función para calcular el numero del tarot*/
void cal_numTarot(){
    int sum = 0;
    sum = day+month+year;
    int val = until_uniqueDig(sum);
    while(val>=10){
        val = until_uniqueDig(val);
    }
    std::cout<<"Su numero del tarot es: " << val << std::endl;
}

/*Main del programa*/
int main()
{
    std::cout<<"Digite su fecha de nacimiento"<< std::endl;
    std::cout<<"Dia: ";
    std::cin >> day;
    day = verify_day(day);
    std::cout<<"Mes: ";
    std::cin >> month;
    month = verify_month(month);
    std::cout<<"Año: ";
    std::cin >> year;
    year = verify_year(year);
    cal_numTarot();

    return 0;
}
