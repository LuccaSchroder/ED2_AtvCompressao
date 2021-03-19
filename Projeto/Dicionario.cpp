#include "header/Dicionario.h"

Dicionario::Dicionario(){
    palavras.clear();
    caracOutput.clear();
    numOutput.clear();
}


bool Dicionario::contemSequencia(string seq){
    for (auto it = palavras.begin(); it != palavras.end(); it++) {
        if(*it == seq){
            return true;
        }
    }
    return false;
}

void Dicionario::insereSequencia(string seq, char c){
    int i = 1;
    for (auto it = palavras.begin(); it != palavras.end(); it++, i++) {
        if(*it == seq){
            caracOutput.push_back(c);
            numOutput.push_back(i);
            palavras.push_back(seq + c);
            return;
        }
    }

    string teste = "";
    teste = teste + c;
    caracOutput.push_back(c);
    numOutput.push_back(0);
    palavras.push_back(teste);

}

void Dicionario::imprime(){
    auto it2 = numOutput.begin();
    for (auto it = caracOutput.begin(); it != caracOutput.end(); it++, it2++) {
        cout << "(" << *it2 << "," << *it << ")";
    }
    cout << endl;
}
