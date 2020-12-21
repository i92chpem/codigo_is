#include <iostream>
#include <string>
#include "Parque.h"
#include "sendero.h"
#include <list>

using namespace std;

int main(){
    Parque p;
    p.setInfo("ubicacion de prueba", "Lucena", "Cordoba", "12/3/1956", "Ninguno", "Parque Pepe", 1000);
    p.printInfo();
    list<Sendero> s = p.getSenderos();
    cout << "\nNumero de senderos: " << s.size();
}