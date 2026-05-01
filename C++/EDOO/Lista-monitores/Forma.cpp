#include "Forma.h"
#include <string>

using namespace std;

Forma::Forma(const string& nome) : nome(nome) {}; // não entendi muito bem corpo de construtor

string Forma::descricao() const {
    string saida = nome + " | Area: " + std::to_string(area()) + " | Perimetro: " + std::to_string(perimetro()); 
    // pq precisa de std:: antes de to_string?
    return saida;
}