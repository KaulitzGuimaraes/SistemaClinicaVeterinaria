#include <iostream>
#include <string>
#include"Tratamento.h"

using namespace std;

Tratamento::Tratamento(){
}


void Tratamento::Reg_Trat (string nome_tratamento, string data_ini, string data_fim){
	this->nome_tratamento = nome_tratamento;
	this->data_ini = data_ini;
	this->data_fim = data_fim;
}
string Tratamento::Con_Trat (){
	return ("Tratamento: " + nome_tratamento + "\nData: " + data_ini + " " + data_fim);
}
