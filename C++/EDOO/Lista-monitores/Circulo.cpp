#include "Circulo.h"
#include <cmath>
#include <iostream>

using namespace std;

Circulo::Circulo(const string& nome, double raio) : Forma(nome), raio(raio) {
    try { 
        if (this->raio < 0) {
            throw "valor negativo";
        }
    } catch (string erro) {
        cout << "Erro: a medida não deve ser um " << erro;
    }
};

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

