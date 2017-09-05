#include <iostream>
#include <string>
#include "especie.h"

using namespace std;


especie::especie(string nom_esp){
        this->nom_esp = nom_esp;
    }

string especie::Con_esp(){
return ("Nome da especie: " + nom_esp + "\n");

}
