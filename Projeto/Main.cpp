#include <iomanip>
#include <iostream>
#include "header/ArqLeitura.h"
#include "header/AlgoritmoComp.h"

using namespace std;

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        cout << "E necessario passar o caminho do arquivo de entrada" << endl;
        exit(1);
    }

    try
    {
        const char *entrada = argv[1];

        cout << "METODO MAIN" << endl;
        ArqLeitura leitura;
        AlgoritmoComp algComp;
        algComp.codificar(leitura.leitura(entrada));
        algComp.imprime();
    }

    catch (const std::exception &e)
    {
        cout << "### ERROR ###" << endl;
        std::cerr << e.what() << '\n';
    }

    cout << "ENCERRANDO MAIN" << endl;

    return 0;
}