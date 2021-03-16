#include <iostream>

using namespace std;

bool eh_primo(int x){
	
    int i, cont = 0;

    for (i = 1; i <= x; i++)
    {
        if((x%i) == 0)
            cont++;
    }

    if(cont == 2)
        return true;
    else 
        return false;
    
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
