#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    char risada[60];
    char Natural[60];
    string Inverso;
    int i,j = 0,tam;

    cin.getline(risada,60);
    tam = strlen(risada);

    for(i = 0; i < tam; i++)
    {
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
                Natural[j] = risada[i];
                j++;
        }   
    }

    Natural[j] = '\0';
    tam = strlen(Natural);

    for(int i=0; i<tam; i++)
        Inverso = Natural[i] + Inverso;
    

    if(Natural == Inverso)
        cout <<"S" << endl;
    else
        cout << "N" << endl;

    return 0;
}