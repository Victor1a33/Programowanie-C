#include <iostream>
using namespace std;
int main(){
	int godziny;
	char pojazd;
	
	cout << "Podaj liczbe godzin parkowania: ";
	cin >> godziny;
	cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
	cin >> pojazd;
	
	cout << "Oplata za parkowanie: ";
	
	switch(pojazd) {
	case 'S': 
		cout << godziny * 5 << " zl" << endl;
		break;
	case 'M':
		cout << godziny * 3 << " zl" << endl;
		break;
	case 'A':
		cout << godziny * 10 << " zl" << endl;
		break;
	default:
		cout << "Nieznana opcja." << endl;
		break;
	}
	
    return 0;
}