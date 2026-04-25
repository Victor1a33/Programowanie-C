#include <iostream>
using namespace std;
int main(){
	int N, liczba, licznik;
	
	liczba = 1;
	licznik = 0;
	
	cout << "Podaj liczbe calkowita dodatnia N: ";
	cin >> N;
	
	do {
		if (liczba % 2 == 0) {
			licznik += 1;
		}
		
		liczba += 1;
		
	} while (liczba <= N);
	
	cout << "Liczba liczb parzystych od 1 do 10 wynosi: " << licznik << endl;
	
    return 0;
}