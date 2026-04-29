#include <iostream>
using namespace std;

int main() {

    int n, new_num, soma=0, average;
    cin >> n;
    
    for(int i = 0; i < n; i++) {

        cin >> new_num;
        soma += new_num;

    }

    average = soma/n;

    cout << "Average = " << average << endl;

    return 0;

}