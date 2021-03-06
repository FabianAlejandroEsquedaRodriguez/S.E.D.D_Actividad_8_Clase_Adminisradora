#include <iostream>
#include "Laboratorio.h"

using namespace std;

int main(){
    //Asi estamos mandando los parametros a nuestro constructor parametrizado
    //Y creamos un objeto
    Computadora c = Computadora("Windows", "8 GB", "Lenovo 330S", 12500.50);
    Computadora c2; //Se crea otro objeto

    /*Es lo mismo que crear un objeto -> Computadora c;
    y establecer los datos por teclado o de manera directa usando los setters
    */ 
    c2.setSistemaOperativo("Linux");
    c2.setMemoriaRAM("16 GB");
    c2.setNombreEquipo("Notebook Huawei");
    c2.setPrecio(14000);

    Laboratorio comp;//Aqui se va a crear el arreglo
    
    //Le mandamos los objetos de la clase computadora, ya creados
    comp.agregarFinal(c);
    comp.agregarFinal(c2);

    comp.mostrar();

    return 0;
}