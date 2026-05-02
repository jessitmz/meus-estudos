#include "Retangulo.h"
#include <iostream>

using namespace std;

Retangulo::Retangulo(const string& nome, double largura, double altura) : Forma(nome), largura(largura), altura(altura) {
    try { 
        if (this->largura < 0 || this->altura < 0) {
            throw "valor negativo";
        }
    } catch (string erro) {
        cout << "Erro: a medida não deve ser um " << erro;
    }
};

double Retangulo::area() const {
    return largura * altura;
};

double Retangulo::perimetro() const {
    return (largura * 2) + (altura * 2);
};

bool Retangulo::quadrado() const {
    return (largura == altura);
};

string Retangulo::descricao() const {
    return Forma::descricao();
};