#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;


Animal::Animal(int ID,string nome_animal, string idade_animal, string sexo_animal){
        this->ID = ID;
        this->nome_animal = nome_animal;
        this->idade_animal = idade_animal;
        this->sexo_animal = sexo_animal;
    }
    string Animal::Con_Animal(){ //permite consultar um dos animais listados
        return ("Nome do animal: "+nome_animal + "\nIdade: " + idade_animal + "\nSexo: " + sexo_animal);
    }
int Animal::get_ID(){
 return ID;
}

/*
void Animal::reg_Especie(string especie_animal){

(especie_a) = new especie(especie_animal);

}
*/



