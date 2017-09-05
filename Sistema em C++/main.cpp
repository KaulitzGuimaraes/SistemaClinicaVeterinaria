#include <iostream>
#include "sistema.h"
using namespace std;

int main(){
    try{
        Sistema *s;
        s = new Sistema();
        s->start();
        s = NULL;
        delete s;
        
    }
    catch(exception& excecao){
        cout << "Ocorreu um problema" << endl;
     };
};

