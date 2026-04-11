#include <iostream>
using namespace std;
int main(){
	int liczba_1, liczba_2;
	char znak;
	
	cout << "Podaj pierwsza liczbe: ";
	cin >> liczba_1;
	cout << "Podaj pierwsza liczbe: ";
	cin >> liczba_2;
	cout << "Podaj znak dzialania (+, -, *, /): ";
	cin >> znak;
	
	cout << "Wynik: ";
	
	switch(znak) {
	case '+':
		cout << liczba_1 + liczba_2;
		break;
	case '-':
		cout << liczba_1 - liczba_2;
		break;
	case '*':
		cout << liczba_1 * liczba_2;
		break;
	case '/':
		if (liczba_2 != 0) {
                cout << liczba_1 / liczba_2;
            } else {
                cout << "Nie mozna dzielic przez zero.";
            }
            break;
	default:
		cout << "Nieznana opcja." << endl;
		break;
	}
	
    return 0;
}