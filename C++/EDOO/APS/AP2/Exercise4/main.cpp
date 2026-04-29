#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // imprimir tabuada do 1 ao 10
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int coluna[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int matriz[11][11];

    for(int i=0; i<11; i++) {
        for(int j=0; j<11; j++) {

            if(i==0 or j==0) {

                if(j != 0) {
                    matriz[i][j] = j;
                    cout << "numero na linha " << i << " coluna " << j << " é igual a: " << matriz[i][j] << endl;
                }
          
                else if(i != 0) {
                    matriz[i][j] = i;
                    cout << "numero na linha " << i << " coluna " << j << " é igual a: " << matriz[i][j] << endl;
                }
            }
            
            else {
                matriz[i][j] = linha[i] * coluna[j];
            }
        }
    }

    for(int i=0; i < 11; i++) {
        for(int j=0; j < 11; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}