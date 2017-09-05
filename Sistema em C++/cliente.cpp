#include "cliente.h"
#include <string>
#include "Animal.h"
using namespace std;
cliente::cliente()
{
    //ctor
}
Animal *buffer;
int cliente::reg_Cli(string nome_cli,string end_cli, string tel_cli, string cep_cli, string email_cli)
{
    this->nome_cli =nome_cli;
    this->end_cli=end_cli;
    this->tel_cli=tel_cli;
    this->cep_cli=cep_cli;
    this->email_cli=email_cli;

    return 1;
}
string cliente::con_cli ()
{
    return("Cliente: " + nome_cli + "\nTel: "+ tel_cli + "\nEndereco:" +end_cli + "\nCEP:" + cep_cli + "\nEmail: " + email_cli);
}
/*
void cliente::reg_animal(string nome_animal, string idade_animal, string sexo_animal){
     buffer = new Animal ( nome_animal, idade_animal, sexo_animal);
     animais.push_back(buffer);

}

vector <string*> cliente::Vis_Animal(){
 vector <string*> buffer;
 for(int count=0; count <animais.size(); count++){

    (*buffer[count])=(animais[count])->Con_Animal();

 }
 return buffer;

}
*/
