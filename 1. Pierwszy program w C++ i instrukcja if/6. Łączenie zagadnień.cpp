#include <iostream>
using namespace std;
int main(){
	int a, b;
	string odp[] = {"parzysta", "nieparzysta"};
	
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	
	int suma = a + b;
	int wynik = suma % 2;
	
	cout << "Suma: " << suma << endl;
	cout << "Suma jest liczba " << odp[wynik] << endl;


    return 0;
}
