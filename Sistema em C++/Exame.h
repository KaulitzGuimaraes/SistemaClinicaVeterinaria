#ifndef EXAME_H
#define EXAME_H
#include <string>
 using namespace std;

class Exame
{
    public:
        Exame(string,string);
        string Con_ex();
        virtual ~Exame();

    protected:

    private:
        string nome_ex;
        string data_ex;
};

#endif // EXAME_H
