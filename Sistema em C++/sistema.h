#include <string>
#include <vector>

#include "Animal.h"
#include "Menu.h"
#include "Registro.h"
#include "veterinario.h"
#include<iomanip>

using namespace std;

class Sistema{
    public:
    void start();
    Sistema();
    ~Sistema();

    private:
    vector <Registro*> registros;
    vector <veterinario*> Veterinario;
    vector <especie*> Especies;
    void M_Tratamento();
    void M_Animal();
    void R_veterinario();
    void V_veterinario();
    void M_Consulta();
    void M_Cliente();
    void M_Especies();

};
