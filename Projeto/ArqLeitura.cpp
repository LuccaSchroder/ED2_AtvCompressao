#include "./header/ArqLeitura.h"
#include <fstream>


ArqLeitura::ArqLeitura(){
    
}

string ArqLeitura::leitura(string nome){
    ifstream arq(nome);

    if (arq.is_open())
    {
        string str;
        getline(arq, str); //ignora primeira linha
        return str;
    }
    else
    {
        cerr << "ERRO: O arquivo nao pode ser aberto!" << endl;
        return NULL;
    }


}
