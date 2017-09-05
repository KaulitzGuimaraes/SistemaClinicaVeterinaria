#ifndef CONSULTA_H
#define CONSULTA_H
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class consulta
{
    private:
            string data;
            string historico;
            int ID;
           // vector <*Tratamento> tratamentos;
    public:
        void Reg_Con(string);
        string Ver_Con ();
        consulta(int, string);
        string get_data();
       // void reg_Trat ();
        virtual ~consulta();
        int get_ID();
    protected:

};

#endif // CONSULTA_H
