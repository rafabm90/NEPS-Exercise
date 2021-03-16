#include <iostream>

using namespace std;

int main(){

	int N, I, i, A = 0, B = 0;

	cin >> N;

	for(i = 0; i < N; i++)
	{
		cin >> I;
		if(I == 1){
			A++;
		}else{
			A++;
			B++;
		}
	}

	if(A%2 == 0)
			cout << 0 << endl;
		else
			cout << 1 << endl;
		if(B%2 == 0)
			cout << 0 << endl;
		else
			cout<< 1 << endl;

	return 0;

}
