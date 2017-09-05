#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>
#include "Animal.h"
using namespace std;
class cliente
{
    public:
        cliente();
        int reg_Cli(string ,string , string, string, string);
        string con_cli ();
       // vector <string*> Vis_Animal();
        //void reg_animal (string,string,string);
    private:
        string nome_cli;
        string end_cli;
        string tel_cli;
        string cep_cli;
        string email_cli;
};

#endif // CLIENTE_H
