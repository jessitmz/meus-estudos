#include "Circulo.h"
#include <cmath>

using namespace std;

Circulo::Circulo(const string& nome, double raio) : Forma(nome), raio(raio) {};

double PI = M_PI;

double Circulo::area() const {
    return PI * raio * raio;
};

double Circulo::perimetro() const {
    return 2 * PI * raio;
};

string Circulo::descricao() const {
    return Forma::descricao();
};

