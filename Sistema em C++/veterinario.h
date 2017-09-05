#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <iostream>
#include <string>
#include<vector>
#include"consulta.h"
using namespace std;

class veterinario
{
    public:
        veterinario(string,string,string);
        string con_vet();
    private:
        string nom_vet;
        string end_vet;
        string tel_vet;
};

#endif // VETERINARIO_H
