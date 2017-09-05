#include <string>
#include <vector>
#include <iostream>
#include <cstdio>
#include <stdio.h>
#include "especie.h"
#include "cliente.h"
#include "Animal.h"
#include "Menu.h"
#include "Tratamento.h"
#include "consulta.h"
#include "veterinario.h"
#include "Exame.h"
#include "sistema.h"
#include<iomanip>
#include "Registro.h"
string decorator= "______________________________________________";
Registro::Registro(int ID)
{
    this->ID = ID;
}
void Registro::R_tratamento(){
string nome, data_ini,data_fim;
cout<<"Nome do tratamento: "<<endl;
cin>>nome;
cout<<"Data de inicio do tratamento:"<<endl;
cin>>data_ini;
cout<<"Data de fim do tratamento: "<<endl;
cin>>data_fim;
Tratamento *buffer;
buffer = new Tratamento();
buffer->Reg_Trat(nome,data_ini,data_fim);
tratamento.push_back(buffer);
cout<<"Tratamento cadastrado com sucesso"<<endl;
}
void Registro::R_Animal(){
     string nome,idade,sexo;
     int ID;
     cout<<"Registrar ID do animal:"<<endl;
     cin>>ID;
     cout<<endl;
     cout<<"Nome do animal: "<<endl;
     getline(cin,nome);
     getline(cin,nome);
     cout<<endl;
     cout<<"Idade do animal: "<<endl;
     getline(cin,idade);
     cout<<endl;
     cout<<"Sexo do animal: "<<endl;
     getline(cin,sexo);
     cout<<endl;
     Animal *buffer;
     buffer = new Animal(ID,nome,idade,sexo);
     animal.push_back(buffer);
     if (animal.size()>0){
        cout<<"Animal Cadastrado com sucesso"<<endl;
     }

}


void Registro::R_cliente(){
     string nome,endereco,telefone,cep,email;
     cout<<"Nome do cliente: "<<endl;
     getline(cin,nome);
     getline(cin,nome);
     cout<<endl;
     cout<<"Endereco do cliente: "<<endl;
     getline(cin,endereco);
     cout<<endl;
     cout<<"Telefone do cliente: "<<endl;
     getline(cin,telefone);
     cout<<endl;
     cout<<endl;
     cout<<"CEP do cliente: "<<endl;
     getline(cin,cep);
     cout<<endl;
     cout<<"E-mail do cliente: "<<endl;
     getline(cin,email);
     cout<<endl;
     Cliente= new cliente();
     Cliente->reg_Cli(nome,endereco,telefone,cep,email);
     if (Cliente != NULL){
        cout<<"Cliente Cadastrado com sucesso"<<endl;
     }
}

void Registro::R_especie(){
    string nome;
cout<<"Especie do animal: "<<endl;
     getline(cin,nome);
     getline(cin,nome);
     cout<<endl;
     especie *buffer;
     buffer= new especie(nome);
     Especie.push_back(buffer);
     if (Especie.size()>0){
        cout<<"Especie Cadastrada com sucesso"<<endl;

}
}

void Registro::R_exame()
{
    string nome,data;
    cout<<"Nome do exame: "<<endl;
     getline(cin,nome);
     getline(cin,nome);
     cout<<endl;
     cout<<"Data do exame: "<<endl;
     getline(cin,data);
      Exame *buffer;
     buffer = new Exame(nome,data);
     exame.push_back(buffer);
     if (exame.size()>0){
        cout<<"Exame Cadastrada com sucesso"<<endl;
     }
}

void Registro::R_consulta(){
    int ID;
    cout << "Registrar ID da consulta: ";
    cin>>ID;
    string data;
    cout<<"Data da consulta: "<<endl;
     getline(cin,data);
     getline(cin,data);
     cout<<endl;
     consulta *buffer;
     buffer = new consulta(ID,data);
     Consulta.push_back(buffer);
     if (Consulta.size()>0){
        cout<<"Consulta Cadastrada com sucesso"<<endl;
     }

}
int Registro::get_ID(){
return ID ;

}
void Registro::V_Animal(){
   for(int count=0; count <animal.size(); count++){
        cout<<decorator<<endl;
        cout<<animal[count]->Con_Animal()<<endl;
 }
}
 void Registro::V_consulta(int ID,string hist){

   for(int count=0; count <Consulta.size(); count++){
        if(Consulta[count]->get_ID()==ID){
            Consulta[count]->Reg_Con(hist);
        }
    cout << "Consulta realizada com sucesso" << endl;
 }

}
void Registro::D_Animal(int ID){
        int count, i;
        for ( count =0;count<animal.size();count++){
                    if (animal[count]->get_ID()==ID){
                        cout<<animal[count]->Con_Animal()<<endl;
                        animal.erase(animal.begin()+(count-1));
                        cout<<"Animal removido com sucesso"<<endl;
                        return;
                     }
                }
         if (count>=animal.size())
            cout<<"ID n�o encontrado"<<endl;

}
string Registro::V_cliente(){

 return Cliente->con_cli();
}
Registro::~Registro()
{
    for (int count; count<animal.size();count++)
    {
        animal[count]=NULL;
        delete animal[count];
    }
    animal.clear();   
    for (int count; count<Consulta.size();count++)
    {
        Consulta[count]=NULL;
        delete Consulta[count];
    }
    Consulta.clear(); 
    
   for (int count; count<exame.size();count++)
    {
        exame[count]=NULL;
        delete exame[count];
    }
    exame.clear(); 
    
   for (int count; count<tratamento.size();count++)
    {
        tratamento[count]=NULL;
        delete tratamento[count];
    }
    tratamento.clear(); 
    
    Cliente = NULL;
    delete Cliente;
     
}