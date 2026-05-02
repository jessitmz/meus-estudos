#include "Forma.h"
#include <string>

using namespace std;

Forma::Forma(const string& nome) : nome(nome) {};

string Forma::descricao() const {
    string saida = nome + " | Area: " + to_string(area()) + " | Perimetro: " + to_string(perimetro()); 
    return saida;
}