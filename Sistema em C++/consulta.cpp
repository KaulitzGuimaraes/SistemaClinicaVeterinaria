#include <string>
#include "consulta.h"
#include <string>
#include <iostream>
using namespace std;
consulta::consulta(int ID, string data){
    this->data = data;
    this->ID = ID;
}

void consulta::Reg_Con( string historico){
    this->historico = historico;
    }

int consulta::get_ID(){
    return ID;
}
string consulta::get_data (){
 return data;
}
string consulta::Ver_Con ()
{
    return ("Data: " + data + "\nHistorico: " + historico);
}
/*
void consulta::reg_Trat (){



}
*/
consulta::~consulta()
{
    //dtor
}
