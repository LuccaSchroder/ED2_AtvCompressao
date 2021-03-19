
#ifndef DICIONARIO_H
#define DICIONARIO_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Dicionario {
    private:   
    vector<string> palavras;
    vector<char> caracOutput;
    vector<int> numOutput;

    public:
    Dicionario(); 
    bool contemSequencia(string seq);
    void insereSequencia(string seq, char c);
    void imprime();

};

#endif 