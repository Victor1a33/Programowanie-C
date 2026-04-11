#include <iostream>
using namespace std;
int main(){
	float stopnie_C, wynik;
	char znak;
	
	cout << "Podaj temperature w stopniach Celsjusza: ";
	cin >> stopnie_C;
	cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
	cin >> znak;
	
	cout << "Temperatura w stopniach ";
	
	switch(znak) {
	case 'K': 
		cout << "Kelvina: " << stopnie_C + 273.15;
		break;
	case 'F':
		cout << "Fahrenheita: " << (stopnie_C * 9/5) + 32.;
		break;
	default:
		cout << "Nieznana opcja." << endl;
		break;
	}
	
    return 0;
}