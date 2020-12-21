#include <string>
#include <iostream>
#include "Persona.h"
#include "Visitante.h"

using namespace std;

int main(){
    unsigned int a = 927467356;
	Visitante mon;
	mon.setInfo("Paco", "Gomez Calero", "73847213M", "13/2/82", a, "paco@gmail.com", "c/Ministerio de la vivienda");
    mon.setRequisitos("Silla de ruedas");
	cout << "Nombre Completo: " << mon.getNombre_Completo() << "\n";
	mon.imprimeContacto();
	cout << "DNI: " << mon.getDNI() << "\n";
    cout << "Requisitos: " << mon.getRequisitos() << "\n";
}