#include <iostream>
using namespace std;
int main(){
	int N, kwadrat;
	
	cout << "Podaj liczbe N: ";
	cin >> N;
	cout << "Kwadraty liczb od 1 do " << N << ":" << endl;
	
	for(int i = 1; i <= N; i++)
	{
		kwadrat = i * i;
		cout << i << "^2 = " << kwadrat << endl;
	}
	
    return 0;
}