#include <iostream>

using namespace std;

int main(){

    int n, i, soma = 0;
    int L, C;

    cin >> n;
    for(i = 0; i < n; i++){
        cin >> L >> C;
        if( L > C)
            soma = soma + C;
    }

    cout << soma << endl;
    return 0;
}
