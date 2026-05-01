#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // imprimir tabuada do 1 ao 10
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int coluna[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i=0; i < 11; i++) {
        for (int j=0; j < 11; j++) {

            if (i==0 || j==0) {

                if (i==0 && j==0) cout << setw(3) << left << " ";
                else if (i==0) cout << setw(3) << left << j;
                else cout << setw(3) << left << i;
            }

            else cout << setw(3) << left << i * j;
        }
        cout << endl;
    }
    
    return 0;
}