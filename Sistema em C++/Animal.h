#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include<vector>
#include"especie.h"
using namespace std;

class Animal{
private:
   string nome_animal;
   string idade_animal;
   string sexo_animal;
   int ID;
   //vector <Tratamento*t> tratamento;

public:
    Animal(int,string, string, string);
    string Con_Animal();
    void reg_Especie (string);
    int get_ID();
};

#endif /* ANIMAL_H */

