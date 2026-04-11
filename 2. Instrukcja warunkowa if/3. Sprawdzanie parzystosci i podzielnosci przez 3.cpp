#include <iostream>
using namespace std;
int main(){
	int liczba, wynik_parzystosc, wynik_dzielenie;
	string dzielenie, parzystosc;
	
	cout << "Podaj liczbe calkowita: ";
	cin >> liczba;
	
	wynik_parzystosc = liczba % 2;
	wynik_dzielenie = liczba % 3;
	

	if (wynik_parzystosc == 0 ) {
		parzystosc = "parzysta.";
	} else {
		parzystosc = "nieparzysta.";
	}
	
	if (wynik_dzielenie == 0 ) {
		dzielenie = " jest";
	} else {
		dzielenie = " nie jest";
	}
  
	cout << "Liczba " << liczba << " jest " << parzystosc << endl;
	cout << "Liczba " << liczba << dzielenie <<" podzielna przez 3." << endl;
    return 0;
}