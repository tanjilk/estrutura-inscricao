#include "identificacao_ee.h"
#include <fstream>
#include <iostream>

using namespace std;

void identificacao_ee::preencher(){
    cout << "Nome do ee: ";
    cin >> nome;

    cout << "Numero do telemovel do ee: ";
    cin >> num_telemovel;

    cout << "Email do ee: ";
    cin >> email;
}

void identificacao_ee::imprimir(){
    cout << "Nome do ee: ";
    cout << nome << endl;

    cout << "Numero do telemovel do ee: ";
    cout << num_telemovel << endl;

    cout << "Email do ee: ";
    cout << email << endl;
}
