#include <iostream>
#include <cstdio>

using namespace std;


int main()
{
    int m[100][100], i, n, j, somaLin[1000], somaColun[1000], somaTotal = -1000000000;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        for(j = 0;j < n;j++)
        {
            cin >> m[i][j];
            somaLin[i] += m[i][j];
            somaColun[j] += m[i][j];
        }
        
    }

     for(i = 0; i < n; i++)
    {
        for(j = 0; j< n; j++)
        {
            somaTotal = max(somaTotal,somaLin[i] + somaColun[j] - 2*m[i][j]);
                
        }
    }

    cout <<endl << somaTotal << endl;

    return 0;
    
}