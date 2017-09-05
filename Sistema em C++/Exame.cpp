#include "Exame.h"
#include <string>
 using namespace std;
Exame::Exame(string nome_ex, string data_ex)
{
    this->nome_ex = nome_ex;
    this->data_ex = data_ex;
}
string Exame::Con_ex(){

return ("Exame: " + nome_ex +"\nData: "  + data_ex);

}
Exame::~Exame()
{
    //dtor
}
