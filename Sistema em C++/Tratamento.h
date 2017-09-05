#ifndef TRATAMENTO_H
#define TRATAMENTO_H

#include <iostream>
#include <string>
#include"Tratamento.h"

using namespace std;

class Tratamento{
private:
   string data_ini; //data de inicio do tratamento
   string data_fim; //data de fim do tratamento
   string nome_tratamento;
public:
    Tratamento();
    void Reg_Trat (string,string,string); //permite abrir um novo tratamento
    string Con_Trat (); // consulta o tratamento
};

#endif /* TRATAMENTO_H */
