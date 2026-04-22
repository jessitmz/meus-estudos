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

        while(l <= r) {

            int mid = (1 + r)/2;

            if(v[mid] == x) {
                ok = 1;
                break;
            }
            else if(v[mid] > x) r = mid - 1;
            else l = mid + 1;

        }

        if(ok) cout << "Achou!\n";
        else cout << "Não achou.\n";

    }

    return 0;

}