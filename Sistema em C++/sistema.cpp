#include <string>
#include <vector>
#include <iostream>
#include <cstdio>
#include <stdio.h>
#include "Menu.h"
#include "Registro.h"
#include "veterinario.h"
#include<iomanip>
#include "sistema.h"
using namespace std;

string d= "______________________________________________";
Sistema::Sistema()
{
    cout<<d<<endl;
    cout<<"SISTEMA CLINICA VETERINARIA"<<endl;
    cout<<d<<endl;
    especie *buffer;
    buffer = new especie("cachorro");
    Especies.push_back(buffer);
    buffer=NULL;
    buffer = new especie("gato");
    Especies.push_back(buffer);
    buffer=NULL;
    buffer = new especie("preá");
    Especies.push_back(buffer);
    buffer=NULL;
    buffer = new especie("papagaio");
    Especies.push_back(buffer);
    buffer=NULL;
}

void Sistema::start()
{
    R_veterinario();
    V_veterinario();
    cout<<endl;
    cout<<d<<endl<<endl;
    vector <string> options({ "Sair", "Manter Cliente", "Manter Animal","Manter Especies", "Manter Consulta","Manter Tratamento"});
    Menu menu("MENU PRINCIPAL",options);
    int opcao=-1;

    while (opcao)
    {
        opcao=menu.getEscolha();
        switch (opcao)
        {

        case 1:
        {
            M_Cliente();
        }
        break;
        case 3:
        {
            M_Especies();
        }
        break;
        case 2:
        {
            M_Animal();
        }
        break;
        case 4:
        {
            M_Consulta();
        }
        break;
        case 5:
        {
            M_Tratamento();
        }
        break;

        };
    };
}
void Sistema::M_Consulta()
{
    cout<<endl;
    cout<<d<<endl<<endl;
    vector <string> options({"Sair","Registrar consulta","Realizar consulta", "Registrar Exame"});
    Menu menu(" CONSULTA",options);
    int opcao=-1;
    int ID;
    while (opcao)
    {
        opcao=menu.getEscolha();
        switch (opcao)
        {
        case 1:
        {
            int ID;
            cout<< "ID do cliente: ";
            cin>>ID;
            int count;
            for ( count =0; (count<registros.size()); count++)
            {
                if (registros[count]->get_ID() == ID)
                {
                    cout<<registros[count]->V_cliente()<<endl;
                    registros[count]->R_consulta();
                }
                if (count>registros.size())
                {
                    cout<<"Nao encontrado"<<endl;
                    return;
                }
            }
            break;
            case 2:
            {
                int ID_C,ID_Con;
                cout<< "ID do cliente: ";
                cin>>ID_C;
                cout<< "ID da consulta: ";
                cin>>ID_Con;
              
                for ( count =0; (count<registros.size()); count++)
                {
                    if (registros[count]->get_ID() == ID_Con)
                    {   
                        string historico;
                        cout << "Historico da consulta: ";
                        cin>>historico;
                        cout<<registros[count]->V_cliente()<<endl;
                        registros[count]->V_consulta(ID_Con, historico);

                    }
                }
            }
            break;
            case 3:
            {
                int ID;
                cout<< "ID do cliente: ";
                cin>>ID;
                int count;
                for ( count =0; (count<registros.size()); count++)
                {
                    if (registros[count]->get_ID() == ID)
                    {
                        registros[count]->R_exame();
                    }
                    if (count>registros.size())
                    {
                        cout<<"Nao encontrado"<<endl;
                        return;
                    }


                }
                break;
            };
        };
        }
    }
}
void Sistema::M_Tratamento()
{
    cout<<endl;
    cout<<d<<endl<<endl;
    vector <string> options({"Sair","Registrar tratamento"});
    Menu menu("TRATAMENTO",options);
    int opcao=-1;
    int ID=0,count;
    while(opcao)
    {
        opcao=menu.getEscolha();
        switch(opcao)
            {
            case 1:
                {
                    cout<<"ID do cliente:"<<endl;
                    cin>>ID;
                    for(count=0;count<registros.size();count++)
                    {
                        if(registros[count]->get_ID()==ID)
                        {
                            cout<<registros[count]->V_cliente()<<endl;
                            registros[count]->R_tratamento();
                        }
                    }
                };
                break;
            };
    }
}
void Sistema::M_Cliente()
{
    cout<<endl;
    cout<<d<<endl<<endl;
    vector <string> options({"Sair","Registrar cliente","Remover Cliente", "Vizualizar todos os clientes"});
    Menu menu("CLIENTE",options);
    int opcao=-1;
    int ID=0,count;
    while (opcao)
    {
        opcao=menu.getEscolha();
        switch (opcao)
        {
        case 1:
        {

            Registro *buffer;
            cout<< "Registar ID do cliente: ";
            cin>>ID;
            buffer = new Registro(ID);
            buffer->R_cliente();
            registros.push_back(buffer);
        }
        break;
        case 2:
        {
            cout<< "ID do cliente: ";
            cin>>ID;
            for ( count =0; (count<registros.size()); count++)
            {
                if (registros[count]->get_ID() == ID)
                {
                    cout<<registros[count]->V_cliente()<<endl;
                    registros.erase(registros.begin()+(count-1));
                    cout<<"Cliente removido com sucesso"<<endl;
                    return;
                }
            }
            if (count>=registros.size())
                cout<<"ID nao encontrado"<<endl;
        }
        break;

        case 3:
        {
            int count =0;
            while (count<registros.size())
            {
                cout<<d<<endl;
                cout<<registros[count]->V_cliente()<<endl;
                cout<<endl;
                count ++;
            }
        };
        };

    }
}

void Sistema::M_Animal()
{

    cout<<endl;
    cout<<d<<endl<<endl;
    vector <string> options({"Sair","Registrar animal","Remover Animal", "Vizualizar todos os animais do clientes"});
    Menu menu(" ANIMAL",options);
    int opcao=-1;
    int count;
    int ID;
    while (opcao)
    {
        opcao=menu.getEscolha();
        switch (opcao)
        {
        case 1:
        {

            cout<<"Inserir ID do cliente : ";
            cin>>ID;

            for ( count =0; (count<registros.size()); count++)
            {
                if (registros[count]->get_ID() == ID)
                {
               
                   cout<<registros[count]->V_cliente()<<endl;;
                    registros[count]->R_Animal();
                }
              
            }
        }
        break;
        case 2:
        {
            int ID_C,ID_A;
            cout<< "ID do cliente: ";
            cin>>ID_C;
            cout<< "ID do animal: ";
            cin>>ID_A;

            for ( count =0; (count<registros.size()); count++)
            {
                if (registros[count]->get_ID() == ID_C)
                {
                    cout<<registros[count]->V_cliente()<<endl;
                    registros[count]->D_Animal(ID_A);
                }


            }
            break;
            case 3:
                cout<<"Inserir ID do cliente: ";
                cin>>ID;
                for ( count =0; (count<registros.size()); count++)
                {
                    if (registros[count]->get_ID() == ID)
                    {
                        cout<<registros[count]->V_cliente()<<endl;
                        registros[count]->V_Animal();
                    }
                    else
                    {
                        if (count>registros.size())
                        {
                            cout<<"Nao encontrado"<<endl;
                            return;
                        }

                    }
                };
            };

        }
    }
}
void Sistema::M_Especies()
{
    cout<<endl;
    cout<<d<<endl<<endl;
    vector <string> options({"Sair","Registrar especie", "Vizualizar todas as especies "});
    Menu menu("ESPECIE",options);
    int opcao=-1;
    int count;

    while (opcao)
    {
        opcao=menu.getEscolha();
        switch (opcao)
        {
        case 1:
        {
            especie *buffer;
            string nome;
            cout<<"Nome da especie: ";
            cin>>nome;
            buffer= new especie(nome);
            Especies.push_back(buffer);
        }
        break;
        case 2:
        {
            for(count=0; count<Especies.size(); count++)
            {
                cout<<d;
                cout<<endl;
                cout<<Especies[count]->Con_esp()<<endl;
                cout<<endl;
                cout<<d;
            }

        }
        break;
        }

    };

}

void Sistema::R_veterinario()
{
    string nom_vet {"Daniel Carvalho"};
    string tel_vet{"3333-4444"};
    string end_vet{"Av Marechal Tito, n 1652,Sao Paulo-SP"};
    veterinario *buffer;
    buffer = new veterinario(nom_vet,tel_vet,end_vet);
    Veterinario.push_back(buffer);
}
void Sistema::V_veterinario()
{
    cout<<Veterinario[0]->con_vet();
}

Sistema::~Sistema()
{
    for (int count; count<registros.size();count++)
    {
        registros[count]= NULL;
        delete registros[count];
    }
    registros.clear();
    
    for (int count; count<Especies.size();count++)
    {
        Especies[count]= NULL;
        delete Especies[count];
    }
    Especies.clear();
    
    Veterinario[0] = NULL;
    delete Veterinario[0];
    Veterinario.clear();
}
