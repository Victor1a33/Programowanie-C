#include <iostream>
using namespace std;
int main(){
	int N, suma;
	
	suma = 0;
	
	cout << "Podaj liczbe N: ";
	cin >> N;
	cout << "Suma liczb od 1 do " << N << " wynosi:";
	
	for(int i = 1; i <= N; i++)
	{
		suma += i;
	}
	
	cout << suma << endl;
	
    return 0;
}