#ifndef _FORMA_H
#define _FORMA_H
#include <string>
using namespace std;

class Forma {

    protected:
        string nome;

    public:
        virtual ~Forma() = default;
        virtual double area() const = 0;
        virtual double perimetro() const = 0;
        virtual string descricao() const;

};

#endif