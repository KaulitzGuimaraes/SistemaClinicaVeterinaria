#ifndef REGISTRO_H
#define REGISTRO_H
#include <string>
#include <vector>

#include "especie.h"
#include "cliente.h"
#include "Animal.h"
#include "Menu.h"
#include "Tratamento.h"
#include "consulta.h"
#include "veterinario.h"
#include "Exame.h"
#include<iomanip>

class Registro
{
    public:
        Registro(int);
        ~Registro();
        void R_Animal();
        void R_cliente();
        void R_especie();
        void R_tratamento();
        void R_consulta();
        void R_veterinario();
        void R_exame();
        void V_Animal();
        string  V_cliente();
        void V_especie();
        void V_tratamento();
        void V_consulta(int,string);
        void V_veterinario();
        void V_exame();
        int get_ID();
        void F_consulta();
        void D_Animal(int);
    protected:

    private:
        vector<Animal*> animal;
        cliente* Cliente;
        vector<especie*> Especie;
        vector<Tratamento*> tratamento;
        vector<consulta*> Consulta;
        vector<veterinario*> Veterinario;
        vector<Exame*> exame;
        int ID;

};

#endif // REGISTRO_H
