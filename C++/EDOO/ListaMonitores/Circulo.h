#ifndef _CIRCULO_H
#define _CIRCULO_H
#include "Forma.h"
#include <string>
using namespace std;

class Circulo : public Forma {

    private:
        double raio;

    public:
        Circulo(const string& nome, double raio);
        double area() const;
        double perimetro() const;
        string descricao() const override;

};

#endif