#include "Retangulo.h"

using namespace std;

Retangulo::Retangulo(const string& nome, double largura, double altura) : Forma(nome), largura(largura), altura(altura) {};

double Retangulo::area() const {
    return largura * altura;
};

double Retangulo::perimetro() const {
    return (largura * 2) + (altura * 2);
};

bool Retangulo::quadrado() const {
    if (largura == altura) return 1;
    else return 0;
};

string Retangulo::descricao() const {
    return Forma::descricao();
};