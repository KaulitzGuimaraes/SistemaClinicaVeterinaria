#include "veterinario.h"
#include <iostream>
#include <string>

using namespace std;

veterinario::veterinario(string nom_vet, string tel_vet, string end_vet){

    this->nom_vet = nom_vet;
    this->tel_vet = tel_vet;
    this->end_vet = end_vet;

}

string veterinario::con_vet(){
return ("Nome do veterinario: "+nom_vet+"\nEndereco do veterinario: "+ end_vet+ "\nTelefone do veterinario" + tel_vet);
}



