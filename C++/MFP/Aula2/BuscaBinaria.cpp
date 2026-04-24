#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    int n;

    cout << "Digite um número para o tamanho do vetor: ";
    cin >> n;

    vector<int> v(n);

    for(int i=0; i < n; i++) {

        cout << "Digite um número para o vetor: ";        
        cin >> v[i];

    }
        
    int x;
    while(cin >> x) {

        bool ok = 0;
        int l = 0, r = n-1;
        cout << "valor de L no começo da busca: " << l << endl;
        cout << "valor de R no começo da busca: " << r << endl;
        
        while(l <= r) {
            
            cout << "valor de L agora é: " << l << endl;
            cout << "valor de R agora é: " << r << endl;

            int mid = (l + r)/2;
            cout << "O mid agora é: " << mid << endl;

            cout << "O valor de v[mid] é: " << v[mid] << endl;
            if(v[mid] == x) {
                cout << "entrou no if" << endl;
                ok = 1;
                break;
            }
            else if(v[mid] > x) {
                cout << "entrou no else if" << endl;
                r = mid - 1;
            }
            else {
                cout << "entrou no else" << endl;
                l = mid + 1;
            }

        }

        if(ok) {
            cout << "Achou!\n";
        }

        else {
            cout << "Não achou.\n";
        }

    }

    return 0;

}