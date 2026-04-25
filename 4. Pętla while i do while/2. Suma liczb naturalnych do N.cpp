#include <iostream>
using namespace std;
int main(){
	int N, liczba, suma;
	
	liczba = 1;
	suma = 0;
	
	cout << "Podaj liczbe N: ";
	cin >> N;
	cout << "Suma liczb naturalnych do " << N << ":";
	
	while(liczba <= N)
	{
		suma += liczba;
		liczba += 1;
	}
	
	cout << suma << endl;
	
    return 0;
}