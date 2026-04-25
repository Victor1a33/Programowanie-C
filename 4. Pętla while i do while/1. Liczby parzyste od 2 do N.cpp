#include <iostream>
using namespace std;
int main(){
	int N, liczba;
	
	liczba = 2;
	
	cout << "Podaj liczbe N: ";
	cin >> N;
	cout << "Liczby parzyste od 2 do " << N << ":" << endl;
	
	while(liczba <= N)
	{
		cout << liczba << endl;
		liczba += 2;
	}
	
    return 0;
}