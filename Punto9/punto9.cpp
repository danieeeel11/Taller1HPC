/**************************************************
* Fecha: 10-agosto-2022
* Autor: Daniel Velásquez
* Materia: HPC I
* Tema: Taller 1 C++
* Tópico: Aplicación Serie de numeros
**************************************************/
#include <iostream>
#include<stdio.h>

int main()
{
    //Numero de filas de la serie
    int numRow;
    std::cout<<"Ingrese el numero de filas que tendra la serie"<<std::endl;
    std::cin >> numRow;
    //Cont sera un apoyo para la impresion de la piramide
    int cont = numRow-1;
    //Variable para indicar el numero inicial de la fila
    int begin=1;

    //Ciclo para desarrollar la serie
    for(int i=1; i<=numRow; i++){
        int auxB=begin;
        //Cantidad espacios para formar la forma de la piramide
        for(int j=0; j<cont; j++){
            std::cout<<" ";
        }
        //Variable para la cantidad de numeros que estaran en cada fila
        int num=0;
        for(int j=1; j<i*2; j++){
            num++;
        }
        //Arreglo vector para guardar la serie de cada fila
        int auxNum[(num+1)/2];
        int ciclo = 1; //1 hacia arriba, 0 reinicio del ciclo
        //Ciclo para la serie ej. (23456789012345)
        for(int k=0; k<(num+1)/2; k++){
            //Si llega a 9, se reinicia el ciclo
            if(auxB==9){
                ciclo=0;
            }
            //Si el ciclo se esta ejecutando hasta 9, se añaden estos valores a un arreglo
            if(ciclo==1){
                auxNum[k]=auxB;
                auxB++;
            }
            //Si el ciclo se reinicia, comienza desde 0
            else{
                auxNum[k]=auxB;
                auxB=0;
                ciclo=1;
            }
        }
        //Tamaño del arreglo
        int tam = sizeof(auxNum)/sizeof(auxNum[0]);
        //Mitad del arreglo, que servirá como espejo para completar la serie de la fila
        int mitad = tam+1/2;
        //Imprimir primera mitad de la serie de la fila
        for(int k=0; k<mitad; k++){
            std::cout<< auxNum[k];
        }
        //Imprimir segunda mitad de la serie de la fila, a modo espejo
        for(int k=mitad-2; k>=0; k--){
            std::cout<< auxNum[k];
        }
        //Salto de linea o fila
        std::cout<< std::endl;
        //Indica por que numero comenzara la fila
        if(begin<9){
            begin++;
        }else{
            begin=0;
        }
        cont--;
    }
}
