#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float saida1 = 0.123456, saida2 = 23.987, saida3 = -123.456;

    cout << left << setw(15) << saida1 << endl;
    cout << right << setw(12) << fixed << setprecision(2) << saida2 << endl;
    cout << setw(10) << scientific << setprecision(4) << saida3 << endl;

    return 0;
}