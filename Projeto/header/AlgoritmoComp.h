#ifndef ALGORITMOCOMP_H
#define ALGORITMOCOMP_H

#include <iostream>
#include <string>
#include <vector>
#include "Dicionario.h"

using namespace std;

class AlgoritmoComp {
    private:   
    Dicionario dicionario;

    public:
    AlgoritmoComp(); 
    void codificar(string cod);
    void imprime();

};

#endif 