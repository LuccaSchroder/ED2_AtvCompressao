#include "header/AlgoritmoComp.h"

AlgoritmoComp::AlgoritmoComp(){

}

void AlgoritmoComp::codificar(string cod){
    char c;
    string atual = "";
    for(int i=0; i<cod.length();i++)
    {
        c = cod.at(i);
        if(dicionario.contemSequencia(atual + c)){
            atual = atual + c;
        } 
        else{
            dicionario.insereSequencia(atual, c);
            atual = "";
        }
    }
    if(atual != "")
    {
        dicionario.insereSequencia(atual, '\0');
    }
}

void AlgoritmoComp::imprime(){
    dicionario.imprime();
}