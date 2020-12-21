#include <iostream>
#include <string>
#include "Persona.h"

using namespace std;


void Persona::setInfo(string n, string a, string D, string f, unsigned int t, string e, string d){
	nombre = n;
	apellidos = a;
	dni = D;
	fecha = f;
	telefono = t;
	email = e;
	direccion = d;
}

string Persona::getDNI(){
	return dni;
}

void Persona::imprimeContacto(){
	cout << "\nTelefono: " << telefono << "\nEmail: " << email << "\n";
}

