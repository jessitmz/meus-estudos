#ifndef _RETANGULO_H
#define _RETANGULO_H
#include "Forma.h"
#include <string>
using namespace std;

class Retangulo : public Forma {
    
    private:
        double largura, altura;

    public:
        Retangulo(const string& nome, double largura, double altura);
        double area() const;
        double perimetro() const;
        bool quadrado() const;
        string descricao() const override;
};

#endif