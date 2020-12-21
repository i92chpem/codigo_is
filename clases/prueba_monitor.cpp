#include "Monitor.h"
#include "Persona.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	unsigned int a = 927467356;
	Monitor mon;
	mon.setInfo("Paco", "Gomez Calero", "73847213M", "13/2/82", a, "paco@gmail.com", "c/Ministerio de la vivienda");
	cout << "Nombre Completo: " << mon.getNombre_Completo() << "\n";
	mon.imprimeContacto();
	cout << "DNI: " << mon.getDNI() << "\n";
	return 0;
}
