#ifndef VISITANTE_H
#define VISITANTE_H

#include <iostream>
#include <string>
#include "Persona.h"

using namespace std;

class Visitante:public Persona{
    private:
        string requisitos_especiales;
    public:
        void setRequisitos(string r){requisitos_especiales = r;};
        string getRequisitos(){return requisitos_especiales;};
};

#endif