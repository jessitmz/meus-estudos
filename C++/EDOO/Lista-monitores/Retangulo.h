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

        Retangulo operator+(const Retangulo& outro) const; // soma dimensões
        Retangulo operator*=(const double escala); // altera a escala do objeto original
        Retangulo operator*(const double escala) const; // novo objeto a partir de outro com escala alterada
        bool operator==(const Retangulo& outro) const; // checa se áreas são iguais
        bool operator<(const Retangulo& outro) const; // checa se área é menor que a outra
        bool operator>(const Retangulo& outro) const; // checa se área é maior que a outra
        string operator<<(const Retangulo& retangulo) const; // para descrever o objeto no output
};

#endif